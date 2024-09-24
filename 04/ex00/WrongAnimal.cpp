/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:42:17 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 16:56:15 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor" << std::endl;
    type = "";
}

WrongAnimal::WrongAnimal(std::string type): type(type)
{
    std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal)
{
    std::cout << "WrongAnimal copy constructor" << std::endl;
    *this = WrongAnimal;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &WrongAnimal)
{
    std::cout << "WrongAnimal operator =" << std::endl;
    type = WrongAnimal.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong" << std::endl;
}

std::string WrongAnimal :: getType() const
{
    return this->type;
}