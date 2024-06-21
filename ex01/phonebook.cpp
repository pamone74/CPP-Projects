#include "phoneBook.hpp"
#include <cctype>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <limits>
#include <ostream>
#include <string>


static std::string trimString(std::string stringToTrim);
// Contact::Contact()
// {
//     firstName = "";
//     lastName = "";
//     nickName = "";
//     darkestSecret = "";

// }

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
int Contact::Add(std::string first_name, std::string last_name, std::string nick_name, std::string darkest_secret)
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
    if (darkest_secret != "")
        darkestSecret = darkest_secret;
    else
        return -1;
    return 0;
}

PhoneBook::PhoneBook()
{
        index = 0;
}
int PhoneBook::Search()
{
    std::string trimFirstName = trimString(contact.firstName);
    std::string trimLastName = trimString(contact.lastName);
    std::string trimNickName = trimString(contact.nickName);
    std::cout << "|" << std::setw(10) << index << "|" << std::setw(10) << trimFirstName\
    <<"|" << std::setw(10) << trimLastName << "|" << std::setw(10) << trimNickName  \
    << "|"<< std::endl;
    return 0;
}
int main(void)
{
   
    int index(0);
    std::string command;
    PhoneBook phonebook[8];
    Contact contact;
    do {
        std::cout << "You can SEARCH, ADD, EXIT" << std::endl;
        std::cin >> command;
        if (command == "ADD")
        {
            std::string firstName, lastName, nickName, darkestSecret;
            std::cout << "Enter First Name" << std::endl;
            std::cin >> firstName;

            std::cout << "Enter Last Name" << std::endl;
            std::cin >> lastName;

            std::cout << "Enter Nick Name" << std::endl;
            std::cin >> nickName;

            std::cout << "Enter Darkest secret" << std::endl;
            std::cin >> darkestSecret;

            if(index < 8)
            {
                
                if (contact.Add(firstName, lastName, nickName, darkestSecret) == -1)
                {
                    std::cout << "A field can not be empty" << std::endl; 
                    continue;
                }
                else
                {
                    phonebook[index].contact = contact;
                    phonebook[index].index = index;
                    index++;
                }
                
            }
            else if (index == 8){
                contact.Add(firstName, lastName, nickName, darkestSecret);
                phonebook[0].contact = contact;
            }
        }
        if (command == "SEARCH")
        {
            int indexSearch;
            std::cout << "Enter the Index Please: " << std::endl;
            std::cin >> indexSearch;
            // Prompt for the index
           if (std::cin.fail())
            {
                std::cin.clear(); // Clear the fail state
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore incorrect input
                std::cout << "Invalid Input. Please enter a valid numeric index." << std::endl;
                continue; // Restart the loop
            }
            if (indexSearch <= 8 && indexSearch < index)
            {
                std::cout << "                  CONTACT              " << std::endl;
                std::cout << "----------------------------------------------" << std::endl;
                phonebook[indexSearch].Search();
                std::cout << "----------------------------------------------" << std::endl;
            }
            else
            {
                std::cout << std::endl << "The index is out of range" << std::endl;
                std::cout << "                  CONTACT              " << std::endl;
                std::cout << "----------------------------------------------" << std::endl;
                for (int i(0); i < index; i++) {
                   phonebook[i].Search();
                }
                std::cout << "----------------------------------------------" << std::endl;
            }
        }
    
    }while (command != "EXIT");

    return 0;

}