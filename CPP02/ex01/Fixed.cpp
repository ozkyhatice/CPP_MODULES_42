/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:36:28 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 13:36:29 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	num = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}
Fixed & Fixed::operator=(const Fixed &number)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->num = number.num;
	return (*this);
}

Fixed::Fixed(const int intval)
{
	std::cout << "Int constructor called" << std::endl;
	this->num = intval << frac_bits;
}

Fixed::Fixed(const float floatval)
{
	std::cout << "Float constructor called" << std::endl;
	this->num = int(roundf(floatval * (1 << frac_bits)));
}


float Fixed::toFloat(void) const
{
	return float(this->num) / (1 << frac_bits);
}

int Fixed::toInt(void) const
{
	return this->num >> frac_bits;
}

std::ostream &operator<<(std::ostream &output, const Fixed &fixed)
{
	output << fixed.toFloat();
	return (output);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return num;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	num = raw;
}
