/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:14:52 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 16:55:09 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal constructor" << std::endl;
    type = "";
}
AAnimal::AAnimal(std::string type): type(type)
{
    std::cout << "AAnimal constructor" << std::endl;
}
AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor" << std::endl;
}
AAnimal::AAnimal(const AAnimal &animal)
{
    std::cout << "AAnimal copy constructor" << std::endl;
    *this = animal;
}

AAnimal &AAnimal::operator = (const AAnimal &animal)
{
    std::cout << "AAnimal operator =" << std::endl;
    type = animal.type;
    return *this;
}

void AAnimal::makeSound() const
{
    std::cout << "AAnimal sound" << std::endl;
}

std::string AAnimal :: getType() const
{
    return type;
}