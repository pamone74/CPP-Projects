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
        int Search();
        void displayContact(int index)  const;
        int index;
        Contact contact;
};

#endif