/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:14:18 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 13:09:07 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog :: Dog()
{
    std::cout << "Dog constructor" << std::endl;
    type = "Dog";
}

Dog::Dog(std::string type):Animal(type)
{
    std::cout << "Dog constructor" << std::endl;
}

Dog :: ~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}

Dog :: Dog(const Dog &dog)
{
    std::cout << "Dog copy constructor" << std::endl;
    *this = dog;
}

Dog &Dog :: operator = (const Dog &dog)
{
    std::cout << "Dog operator =" << std::endl;
    type = dog.type;
    return *this;
}

void Dog :: makeSound() const
{
    std::cout << "Hav Havv" << std::endl;
}