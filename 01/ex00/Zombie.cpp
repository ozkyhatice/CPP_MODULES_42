/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:35:37 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 19:35:38 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string name)
{
    this->name = name;
}

std::string Zombie::getName(void)
{
    return (this->name);
}

void Zombie::announce(void)
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie(void)
{
    std::cout<< "Constructor"<<std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
     std::cout << getName() <<"is dead." << std::endl;
}