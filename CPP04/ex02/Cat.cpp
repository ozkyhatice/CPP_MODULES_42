/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:16:53 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 15:12:58 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
Cat :: Cat()
{
    std::cout << "Cat constructor" << std::endl;
    type = "Cat";
    brain = new Brain();
}
Cat::Cat(std::string type):AAnimal(type)
{
    std::cout << "Cat constructor" << std::endl;
    brain = new Brain();
}
Cat :: ~Cat()
{
    std::cout << "Cat destructor" << std::endl;
    delete brain;
}

Cat :: Cat(const Cat &cat)
{
    std::cout << "Cat copy constructor" << std::endl;
    *this = cat;
}

Cat &Cat :: operator = (const Cat &cat)
{
    std::cout << "Cat operator =" << std::endl;
    type = cat.type;
    delete brain;
    brain = new Brain();
    brain = cat.brain;
    return *this;
}

void Cat :: makeSound() const
{
    std::cout << "Miyavv" << std::endl;
}

void Cat :: setidea(std::string idea, int index)
{
    brain->ideas[index] = idea;
}

std::string Cat :: getidea(int index) const
{
    return brain->ideas[index];
}