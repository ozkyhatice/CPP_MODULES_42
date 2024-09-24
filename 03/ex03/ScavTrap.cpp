/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:58:01 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 14:58:02 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Name): ClapTrap(Name)
{
    this->hit = 100;
    this->energy = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap():ClapTrap()
{
    this->hit = 100;
    this->energy = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy):ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap :: operator=(const ScavTrap &copy)
{
    ClapTrap::operator=(copy);
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energy <= 0 || this->hit <= 0)
    {
        std::cout << "ScavTrap " <<this->get_name() << " has no energy to attack!"<< std::endl;
        return;
    }
    this->energy --;
    std::cout << "ScavTrap " << Name << " attack " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << Name << " is now in Gate keeper mode." << std::endl;
}

