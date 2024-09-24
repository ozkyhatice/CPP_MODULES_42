/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:13:58 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 13:05:32 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor" << std::endl;
    type = "";
}
Animal::Animal(std::string type): type(type)
{
    std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}
Animal::Animal(const Animal &animal)
{
    std::cout << "Animal copy constructor" << std::endl;
    *this = animal;
}

Animal &Animal::operator = (const Animal &animal)
{
    std::cout << "Animal operator =" << std::endl;
    type = animal.type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "" << std::endl;
}

std::string Animal :: getType() const
{
    return this->type;
}