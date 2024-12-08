/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:57:35 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 14:57:36 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << Name << std::endl;
    this->Name = Name;
    std::cout << this->Name << std::endl;
    std::cout<<get_name();
    this->hit = 10;
    this->energy = 10;
    this->attack_damage = 0;
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap()
{
    this->Name = "";
    this->hit = 10;
    this->energy = 10;
    this->attack_damage = 0;
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap &ClapTrap :: operator=(const ClapTrap &copy)
{
    std::cout << "ClapTrap assignment operator called" << std::endl;
    Name = copy.Name;
    hit = copy.hit;
    energy = copy.energy;
    attack_damage = copy.attack_damage;
    return (*this);
}

void ClapTrap:: set_name(std::string Name)
{
    this->Name = Name;
}

std::string ClapTrap:: get_name()
{
    return (Name);
}

void ClapTrap:: set_hit(unsigned int hit)
{
    this->hit = hit;
}
unsigned int ClapTrap:: get_hit()
{
    return (this->hit);
}
void ClapTrap:: set_energy(unsigned int energy)
{
    this->energy = energy;
}
unsigned int ClapTrap::get_energy()
{
    return (this->energy);
}
void ClapTrap::set_damage(unsigned int attack_damage)
{
    this->attack_damage = attack_damage;
}
unsigned int ClapTrap:: get_damage()
{
    return (this->attack_damage);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energy <= 0 || this->hit <= 0)
    {
        std::cout << "ClapTrap " <<this->get_name() << " has no energy to attack!"<< std::endl;
        return;
    }
    this->energy --;
    std::cout << "ClapTrap " <<this->get_name() << " attacks " << target << ", causing " << attack_damage<< " points of damage!"<< std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > this->hit)
        this->hit = 0;
    else if (hit >= amount)
        hit -= amount;
    
    std::cout << "ClapTrap " <<this->get_name() << " takes " << amount << " points of damage!"<< std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy == 0)
    {
        std::cout << "ClapTrap " <<this->get_name() << " has no energy to attack!"<< std::endl;
        return;
    }
    else if (hit + amount > 10)
        hit = 10;
    else
        hit += amount;
    energy -= 1;
    std::cout << "ClapTrap " <<this->get_name() << " has been repaired by " << amount << " points!"<< std::endl; 
}

// void ClapTrap::print_status()
// {
//     std::cout << "Name: " << this->Name << std::endl;
//     std::cout << "Hit: " << this->hit << std::endl;
//     std::cout << "Energy: " << this->energy << std::endl;
//     std::cout << "Attack Damage: " << this->attack_damage << std::endl;

// }