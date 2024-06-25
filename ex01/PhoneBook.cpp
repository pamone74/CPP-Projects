/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 10:37:58 by pamone            #+#    #+#             */
/*   Updated: 2024/06/22 14:12:21 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cctype>
#include <iostream>
#include <iomanip>
#include <ostream>
#include <string>
#include <sstream>
#include <cstdlib>
//--------------------------------------------------------------------------------------//
// ============================== trimstring() =========================================//
static std::string trimString(std::string stringToTrim)
{
    std::string truncated;
    if (stringToTrim != "" && stringToTrim.length() >= 10) {

        truncated = stringToTrim.substr(0, 9);
        truncated.push_back('.');
        return truncated;
    }
    // this means that the string length is within the range
    return stringToTrim;
}
// ******************************* END *************************************************//
//-------------------------------------------------------------------------------------//
// ================================= Valid =============================================//
int valid(std::string phone)
{
    if(phone.empty())
        return 0;
    for(size_t i(0); i < phone.length(); i++)
    {
        if(!std::isdigit(phone[i]))
            return 0;
    }
    return 1;
    
}
//================================= End of Valid =======================================//

//-------------------------------------------------------------------------------------//
//                                 displayContact                                      //
//-------------------------------------------------------------------------------------//
void PhoneBook::displayContact()const
{
    std::cout << "                  CONTACT              " << std::endl;
    std::cout << "--------------------<< >>---------------------" << std::endl;
    

    for (int i(0); i <= index; i++) {
        std::string trimFirstName = trimString(contactList[i].getFirstName());
        std::string trimLastName = trimString(contactList[i].getLastName());
        std::string trimNickName = trimString(contactList[i].getNickName());
        std::cout << "|" << std::setw(10) << i << "|" << std::setw(10) << trimFirstName\
        <<"|" << std::setw(10) << trimLastName << "|" << std::setw(10) << trimNickName  \
        << "|"<< std::endl;
    }
    std::cout << "----------------------------------------------" << std::endl;
}
//-------------------------------------------------------------------------------------//
// ============================== Class Methods ========================================//
// ******************************* getFirstName() **************************************//
std::string Contact::getFirstName() const
{
    return firstName;
}
// ******************************* getFirstName() End **********************************//

//-------------------------------------------------------------------------------------//
// ******************************* getLastName() **************************************//
std::string Contact::getLastName() const
{
    return lastName;
}
// ******************************* getLastName() End **********************************//
//-------------------------------------------------------------------------------------//
// ******************************* getNickName() **************************************//
std::string Contact::getNickName() const
{
    return nickName;
}

std::string Contact::getPhoneNumber() const{
    return phoneNumber;
}

std::string Contact::getDarkestSecret()const
{
    return darkestSecret;
}
// ******************************* END ************************************************//

//-------------------------------------------------------------------------------------//
//                                 Contact Add                                         //
//-------------------------------------------------------------------------------------//
int Contact::Add(std::string first_name, std::string last_name,\
std::string nick_name,std::string phone, std::string darkest_secret)
{
    if (first_name != "")
        firstName = first_name;
    else
        return -1;
    if (last_name != "")
        lastName = last_name;
    else
        return -1;
    if (nick_name != "")
        nickName = nick_name;
    else
        return -1;
    if ((!phone.empty()) && phone.length()== 10 && valid(phone) == 1)
        phoneNumber = phone;
    else
    {
        std::cout << "Phone Number Is not valid" << std::endl;
        return -1;
    }
    if (darkest_secret != "")
        darkestSecret = darkest_secret;
    else
        return -1;
    return 0;
}
//*************************************** END ****************************************//

//-------------------------------------------------------------------------------------//
//                                 PhoneBook Constructor                               //
//-------------------------------------------------------------------------------------//
PhoneBook::PhoneBook()
{
    index = 0;
}
//*************************************** END ****************************************//

//-------------------------------------------------------------------------------------//
//                                 PhoneBook Search                                    //
//-------------------------------------------------------------------------------------//
int PhoneBook::Search(int index) const
{
    std::string trimFirstName = trimString(contactList[index].getFirstName());
    std::string trimLastName = trimString(contactList[index].getLastName());
    std::string trimNickName = trimString(contactList[index].getNickName());
    std::cout << "|" << std::setw(10) << index << "|" << std::setw(10) << trimFirstName\
    <<"|" << std::setw(10) << trimLastName << "|" << std::setw(10) << trimNickName  \
    << "|"<< std::endl;
    return 0;
}
// Setters
// first name
void Contact::setFirstName(std::string first_name)
{   if(!first_name.empty())
        firstName  = first_name;
}

// last name
void Contact::setLastName(std::string last_name)
{
    if(!last_name.empty())
        lastName  = last_name;
}

// NickName
void Contact::setNickName(std::string nick_name)
{
    if(!nick_name.empty())
        nickName = nick_name;
}

// set phone Number
void Contact::setPhoneNumber(std::string phone_number)
{
    if(phone_number.empty())
        phoneNumber = phone_number;
}

void Contact::setDarkestSecret(std::string secret)
{
    if(!secret.empty())
        darkestSecret = secret;
}
//-------------------------------------------------------------------------------------//
//                            PhoneBook Search addcontact                              //
//-------------------------------------------------------------------------------------//
void PhoneBook::addContact(Contact list, int index)
{
    static int oldest(0);
    if (index <= 8) {
        contactList[index].Add(list.getFirstName(),list.getLastName(), list.getNickName(), list.getPhoneNumber(), list.getDarkestSecret());
    }
    if(index == 8 && oldest <= 8)
    {
        contactList[oldest].Add(list.getFirstName(),list.getLastName(), list.getNickName(), list.getPhoneNumber(), list.getDarkestSecret());
        if(oldest == 8)
            oldest = 0;
        else
          oldest ++;
    }
    
}
//-------------------------------------------------------------------------------------//
//                                 main.c                                              //
//-------------------------------------------------------------------------------------//

int main(void)
{
    int index(0);
    std::string command;
    PhoneBook phonebook;
    Contact contact;
    do {
        std::cout << "You can SEARCH, ADD, EXIT" << std::endl;
        if(!(getline(std::cin, command)))
            exit(1);
        if (command == "ADD")
        {
            std::string firstName, lastName, nickName,phoneNumber, darkestSecret;
            std::cout << "Enter First Name" << std::endl;
            if(!(getline(std::cin, firstName)))
                exit(1);
            std::cout << "Enter Last Name" << std::endl;
            if(!(getline(std::cin, lastName)))
                exit(1);
            std::cout << "Enter Nick Name" << std::endl;
            if(!(getline(std::cin, nickName)))
                exit(1);
            std::cout << "Enter Phone Number" << std::endl;
            if(!(getline(std::cin, phoneNumber)))
                exit(1);
            std::cout << "Enter Darkest Secret" << std::endl;
            if(!(getline(std::cin, darkestSecret)))
                exit(1);
            if(index < 8)
            {
               if (contact.Add(firstName, lastName, nickName, phoneNumber,darkestSecret) == -1)
               {
                    std::cout << "A field can not be empty" << std::endl; 
                    continue;
                }else
                {
                   phonebook.addContact(contact, index);

                   phonebook.index = index;
                   index++;
                }
            }
            else if (index == 8){
                 contact.Add(firstName, lastName, nickName,phoneNumber, darkestSecret);
                phonebook.addContact(contact, index);
            }
        }
        if (command == "SEARCH")
        {
            phonebook.displayContact();
            std::string input;
            int indexSearch;
            std::cout << "Enter the Index Please: " << std::endl;
            if(!(getline(std::cin, input)))
                exit(1);
            std::istringstream iss(input);
            if(!(iss >> indexSearch))
            {
                std::cout << "Invalid Input. Please enter a valid numeric index." << std::endl;
                continue;
            }
            if (indexSearch <= 8 && indexSearch < index)
            {
                std::cout << "                  CONTACT              " << std::endl;
                std::cout << "----------------------------------------------" << std::endl;
                phonebook.Search(indexSearch);
                std::cout << "----------------------------------------------" << std::endl;
            }
            else
                std::cout << "The index is out of range" << std::endl;
        }
    
    }while (command != "EXIT");

    return 0;

}