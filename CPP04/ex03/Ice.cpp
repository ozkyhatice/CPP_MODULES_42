/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:27:54 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 16:43:23 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
    std::cout << "Ice constructor" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destructor" << std::endl;
}

Ice::Ice(Ice const & copy):AMateria(copy)
{
    std::cout << "Ice copy constructor" << std::endl;
    *this = copy;
}

Ice & Ice::operator = (Ice const & copy)
{
    (void)copy;
    std::cout << "Ice operator =" << std::endl;
    return *this;
}

AMateria* Ice::clone() const
{
    Ice *ice = new Ice();
    return ice;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}