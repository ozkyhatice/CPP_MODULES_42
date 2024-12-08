/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:57:43 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 14:57:45 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name"), ScavTrap(), FragTrap(), Name(Name)
{
    this->hit = FragTrap::hit;
    this->energy = ScavTrap::energy;
    this->attack_damage = FragTrap::attack_damage;
    std::cout << "DiamondTrap " << this->Name << " is born!" << std::endl;
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->Name << " is dead!" << std::endl;
}

DiamondTrap::DiamondTrap(): ClapTrap("_clap_name"), ScavTrap(), FragTrap(), Name("Default")
{
    this->hit = FragTrap::hit;
    this->energy = ScavTrap::energy;
    this->attack_damage = FragTrap::attack_damage;
    std::cout << "DiamondTrap " << this->Name << " is born!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = copy;
}

DiamondTrap &DiamondTrap :: operator=(const DiamondTrap &copy)
{
    std::cout << "DiamondTrap assignment operator called" << std::endl;
    ClapTrap::operator=(copy);
    ScavTrap();
    FragTrap();
    return *this;
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{

    std::cout << "DiamondTrap name is " << this->Name << " and ClapTrap name is "<< ClapTrap::Name << std::endl;
}

void DiamondTrap::pprint_status()
{
std::cout<<ClapTrap::Name<<std::endl;
    std::cout << "Name: " << this->Name << std::endl;
    std::cout << "Hit: " << this->hit << std::endl;
    std::cout << "Energy: " << this->energy << std::endl;
    std::cout << "Attack Damage: " << this->attack_damage << std::endl;

}