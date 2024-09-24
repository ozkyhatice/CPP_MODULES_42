/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:14:08 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 13:07:51 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat :: Cat()
{
    std::cout << "Cat constructor" << std::endl;
    type = "Cat";
}

Cat::Cat(std::string type):Animal(type)
{
    std::cout << "Cat constructor" << std::endl;
}

Cat :: ~Cat()
{
    std::cout << "Cat destructor" << std::endl;
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
    return *this;
}

void Cat :: makeSound() const
{
    std::cout << "Miyavvv" << std::endl;
}