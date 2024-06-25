/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 10:38:34 by pamone            #+#    #+#             */
/*   Updated: 2024/06/22 13:18:00 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <string>

class Contact{

    public:
        int Add(std::string, std::string,std::string,std::string, std::string);
        std::string getFirstName(void) const;
        std::string getLastName(void) const;
        std::string getNickName(void) const;
        std::string getPhoneNumber(void)const;
        std::string getDarkestSecret(void) const;
        // setters
        void setFirstName(std::string);
        void setLastName(std::string);
        void setNickName(std::string);
        void setPhoneNumber(std::string);
        void setDarkestSecret(std::string);

        
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;

};
class PhoneBook{

    public:
        PhoneBook(void); 
        void displayContact(void) const;
        int Search(int) const;
        void addContact(Contact list, int);
        int index;
    private:
        Contact contactList[9];
};


#endif