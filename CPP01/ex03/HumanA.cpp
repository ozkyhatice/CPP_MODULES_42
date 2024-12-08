/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:36:12 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/22 13:30:45 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    std::cout<<"HumanA Constructor"<<std::endl;
    this->name = name;
    this->weapon = weapon;
}

HumanA::~HumanA()
{
    std::cout<<"HumanA Destructor"<<std::endl;
}
void HumanA::attack()
{
    std::cout<<this->name<<" attacks with their "<<this->weapon.getType()<<std::endl;
}

void HumanA::setWeapon(Weapon& weapon) {
    this->weapon = weapon;
}

