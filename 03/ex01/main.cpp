/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:56:13 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 17:10:02 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
    ScavTrap ct("lkdhfld");


    for (int i = 0; i < 8; i++)
    {
        // ct.print_status();
        // ct.takeDamage(10);
        ct.takeDamage(10);
    }
    ct.takeDamage(100);
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