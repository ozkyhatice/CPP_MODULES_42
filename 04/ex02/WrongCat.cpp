/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:41:24 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 16:54:33 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat :: WrongCat()
{
    std::cout << "WrongCat constructor" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(std::string type):WrongAnimal(type)
{
    std::cout << "WrongCat constructor" << std::endl;
}

WrongCat :: ~WrongCat()
{
    std::cout << "WrongCat destructor" << std::endl;
}

WrongCat :: WrongCat(const WrongCat &WrongCat)
{
    std::cout << "WrongCat copy constructor" << std::endl;
    *this = WrongCat;
}

WrongCat &WrongCat :: operator = (const WrongCat &WrongCat)
{
    std::cout << "WrongCat operator =" << std::endl;
    type = WrongCat.type;
    return *this;
}

void WrongCat :: makeSound() const
{
    std::cout << "Miyavvv" << std::endl;
}