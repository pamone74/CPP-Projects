#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>

class Contact{

    public:
        // Contact();
        int Add(std::string, std::string,std::string, std::string);
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string darkestSecret;

};
class PhoneBook{

    public:
        PhoneBook(void); 
        int Search();
        void displayContact(int index)  const;
        int index;
        Contact contact;
};

#endif