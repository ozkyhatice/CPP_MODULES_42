/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:12:36 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 17:12:44 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	name = "";
	surname = "";
	nickname = "";
	phonenumber = "";
	darkestsecret = "";
}

void    Contact::set_contact(std::string name, std::string surname, std::string nickname, std::string num, std::string darkestsecret)
{
    Contact::name = name;
    Contact::surname = surname;
    Contact::nickname = nickname;
    Contact::phonenumber = num;
    Contact::darkestsecret = darkestsecret;
}

std::string Contact::get_name() {
    return (name);
}

std::string Contact::get_surname() {
    return (surname);
}

std::string Contact::get_nickname() {
    return (nickname);
}

std::string Contact::get_phoneNumber() {
    return (phonenumber);
}

std::string Contact::get_darkestSecret() {
    return (darkestsecret);
}