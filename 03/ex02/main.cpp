/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:57:21 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 14:57:22 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main()
{
    FragTrap ct("lkdhfld");


    for (int i = 0; i < 11; i++)
    {
        // ct.print_status();
        // ct.takeDamage(10);
        ct.takeDamage(10);
        ct.highFivesGuys();
        ct.attack("blabla");
    }
    // ct.set_energy(5);
    // ct.print_status();
    // for(int i = 0; i< 10; i++)
    // {
    //     ct.attack("blabla");
    //     ct.print_status();
    // }
    // ct.set_energy(5);
    // ct.print_status();
    // std::cout << "*********"<< std::endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     ct.takeDamage(2);
    //     ct.print_status();
    // }

}