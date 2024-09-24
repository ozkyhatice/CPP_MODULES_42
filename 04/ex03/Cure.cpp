/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:27:49 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 16:43:16 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
    std::cout << "Cure constructor" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructor" << std::endl;
}

Cure::Cure(Cure const & copy):AMateria(copy)
{
    std::cout << "Cure copy constructor" << std::endl;
    *this = copy;
}

Cure & Cure::operator = (Cure const & copy)
{
    (void)copy;
    std::cout << "Cure operator =" << std::endl;
    return *this;
}

AMateria* Cure::clone() const
{
    Cure *cure = new Cure();
    return cure;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}