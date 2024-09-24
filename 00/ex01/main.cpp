/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:12:46 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 18:19:10 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
    std::string input;
    PhoneBook   phonebook;
	
    while (1) {
        std::cout << "-----PLEASE ENTER A COMMAND: ADD, SEARCH or EXIT-----" << std::endl;
        std::cout << "> ";
        getline(std::cin, input);
        if (input.empty())
            continue;
        if (input == "ADD")
            phonebook.addContact();
        else if (input == "SEARCH")
            phonebook.searchContact();
        else if (input == "EXIT") {
            return (0);
		}
    }
}