/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:17:03 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 13:46:32 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog :: Dog()
{
    std::cout << "Dog constructor" << std::endl;
    type = "Dog";
    brain = new Brain();
}
Dog::Dog(std::string type):Animal(type)
{
    std::cout << "Dog constructor" << std::endl;
    brain = new Brain();
}

Dog :: ~Dog()
{
    std::cout << "Dog destructor" << std::endl;
    delete brain;
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
    delete brain;
    brain = new Brain();
    brain = dog.brain;
    return *this;
}

void Dog :: makeSound() const
{
    std::cout << "Hav Havv" << std::endl;
}

void Dog::setidea(std::string idea, int index)
{
    brain->ideas[index] = idea;
}

std::string Dog::getidea(int index) const
{
    return brain->ideas[index];
}