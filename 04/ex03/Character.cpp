/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:54:31 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 15:58:08 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name):name(name)
{
    std::cout << "Character constructor" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        materias[i] = NULL;
    }
}

Character::~Character()
{
    std::cout << "Character destructor" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        if(materias[i])
            delete materias[i];
    }
}

Character::Character(Character const & copy)
{
    std::cout << "Character copy constructor" << std::endl;
    *this = copy;
}

Character & Character::operator = (Character const & copy)
{
    std::cout << "Character operator =" << std::endl;
    name = copy.name;
    for(int i = 0; i < 4; i++)
    {
        if(materias[i])
            delete materias[i];
        materias[i] = copy.materias[i]->clone();
    }
    return *this;
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    {
        if(!materias[i])
        {
            materias[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if(idx >= 0 && idx < 4)
    {
        materias[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if(idx >= 0 && idx < 4)
    {
        if(materias[idx])
        {
            materias[idx]->use(target);
        }
    }
}

