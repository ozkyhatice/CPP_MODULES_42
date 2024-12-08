/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:57:57 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 14:57:58 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap john("John");
    ClapTrap jim("Jim");
    ClapTrap joe("Joe");
    ScavTrap jane("Jane");
    FragTrap joseph("Joseph");

    john.attack("Marge");
    john.attack("Bart");
    john.attack("Homer");
    john.takeDamage(5);
    jim.takeDamage(9);
    jim.takeDamage(10);
    joe.beRepaired(10);
    joe.takeDamage(19);
    jane.attack("Lisa");
    jane.takeDamage(99);
    jane.beRepaired(50);
    jane.guardGate();
    joseph.attack("Maggie");
    joseph.takeDamage(99);
    joseph.beRepaired(50);
    joseph.highFivesGuys();
}