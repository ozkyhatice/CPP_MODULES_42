/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:55:32 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 17:07:29 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap ct("a");
    // ct.print_status();
    ct.attack("b");
    // ct.print_status();
    ct.takeDamage(10);
    // ct.print_status();

    for (int i = 0; i < 10; i++)
    {
        ct.beRepaired(1);
        // ct.print_status();
    }
    ct.set_energy(5);
    // ct.print_status();
    for(int i = 0; i< 10; i++)
    {
        ct.attack("c");
        // ct.print_status();
    }
    ct.set_energy(5);
    // ct.print_status();
    std::cout << "*********"<< std::endl;
    for (int i = 0; i < 10; i++)
    {
        ct.takeDamage(2);
        // ct.print_status();
    }
    // ct.print_status();
    
}