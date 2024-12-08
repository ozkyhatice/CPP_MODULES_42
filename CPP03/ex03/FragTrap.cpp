/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:57:50 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 14:57:51 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string Name): ClapTrap(Name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->hit = 100;
    this->energy = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap():ClapTrap()
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->hit = 100;
    this->energy = 100;
    this->attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy):ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    ClapTrap::operator=(copy);
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << "gives a high five" << std::endl;
}