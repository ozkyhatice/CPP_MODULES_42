/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:35:55 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 19:35:56 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string name)
{
    this->Name = name;
}

std::string Zombie::getName(void)
{
    return (this->Name);
}

void Zombie::announce(void)
{
    std::cout << getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
    std::cout<<"Constructor"<<std::endl;
}

Zombie::Zombie(std::string name)
{
    this->Name = name;
}

Zombie::~Zombie(void)
{
    std::cout<< getName() << "is dead" << std::endl;
}

