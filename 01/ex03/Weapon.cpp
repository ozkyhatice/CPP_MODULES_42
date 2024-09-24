/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:36:33 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 19:36:34 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << "Weapon Constructor" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor" << std::endl;
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}
const std::string& Weapon::getType()
{
    const std::string &ref = this->type;
    return (ref);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

