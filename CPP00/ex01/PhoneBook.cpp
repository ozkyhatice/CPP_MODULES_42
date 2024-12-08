/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:12:50 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 18:24:33 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#define MAX_CONTACTS 8

PhoneBook::PhoneBook()
{
    id = 0;
    numContacts = 0;
}

void PhoneBook::addContact()
{
    std::string fields[5] = {"name", "lastname", "nickname", "phonenumber", "darkestsecret"};
    std::string inputs[5];

    for (int i = 0; i < 5; ++i)
    {
        while (true)
        {
            std::cout << fields[i] << ": ";
            getline(std::cin, inputs[i]);
            if (!inputs[i].empty()) {
                break;
            }
        }
    }
    contacts[id++ % MAX_CONTACTS].set_contact(inputs[0], inputs[1], inputs[2], inputs[3], inputs[4]);
	numContacts = std::min(numContacts + 1, MAX_CONTACTS);
    std::cout << "SUCCESS!" << std::endl;
}

void writePipe(std::string str) {
    if (str.length() > 10) {
        std::cout << std::setw(9) << str.substr(0, 9) << ".|";
    } else
        std::cout << std::setw(10) << str << "|";
}

bool ft_isnum(std::string str) {
    for (int i = 0; i < (int)str.length(); i++) {
        if (isdigit(str[i]) == false)
            return false;
    }
    return true;
}

void    currentContact(int numContacts, Contact contacts[])
{
    std::cout << "        id|      name|   surname|  nickname|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;

    for (int i = 0; i < numContacts; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        writePipe(contacts[i].get_name());
        writePipe(contacts[i].get_surname());
        writePipe(contacts[i].get_nickname());
        std::cout << std::endl;
    }
}

void infoContact(Contact contact) {
    std::cout << "Name: "<< (contact.get_name()) <<std::endl;
    std::cout << "Lastname: "<< (contact.get_surname()) <<std::endl;
    std::cout << "Nickname: "<< (contact.get_nickname()) <<std::endl;
    std::cout << "Phone Number: "<< (contact.get_phoneNumber()) <<std::endl;
    std::cout << "Darkest Secret: "<< (contact.get_darkestSecret()) <<std::endl;
}

int get_conId(int numContacts)
{
    std::string str_id;
    int int_id;
    while (1) {
        std::cout << "enter id: ";
        getline(std::cin, str_id);
        if (str_id.empty() )
            continue;
        if (ft_isnum(str_id) == false || str_id.length() > 1) {
            std::cout << "invalid id" << std::endl;
            continue;
        }
        int_id = std::stoi(str_id) - 1;
        if (int_id < 0 || int_id >= MAX_CONTACTS || int_id > numContacts - 1) {
            std::cout << "invalid id" << std::endl;
            continue;
        }
        return int_id;
    }
}
void PhoneBook::searchContact() {
    if (numContacts == 0)
    {
        std::cout << "No contacts available." << std::endl;
        return;
    }
    currentContact(numContacts, contacts);
    int int_Id;
    while (1) {
        int_Id = get_conId(numContacts);
        infoContact(contacts[int_Id]);
		break;
	}
}


