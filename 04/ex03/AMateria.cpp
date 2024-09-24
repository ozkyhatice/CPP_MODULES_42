/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:27:46 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 16:42:34 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria constructor" << std::endl;
}

AMateria::AMateria(std::string const & type):type(type)
{
    std::cout << "AMateria constructor" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor" << std::endl;
}

AMateria::AMateria(AMateria const & copy)
{
    (void)copy;
    std::cout << "AMateria copy constructor" << std::endl;
    
}



std::string const & AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    std::cout << "AMateria use" << std::endl;
}
