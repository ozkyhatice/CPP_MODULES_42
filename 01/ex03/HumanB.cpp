/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:36:20 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 19:36:21 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    std::cout << "HumanB Constructor" << std::endl;
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB()
{
    std::cout << "HumanB Destructor" << std::endl;
}

void HumanB::attack()
{
    if (weapon == NULL)
        std::cout << name + ": attacks with their ..." << std::endl;
    else
        std::cout << name + ": attacks with their " + weapon->getType() << std::endl;

}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}