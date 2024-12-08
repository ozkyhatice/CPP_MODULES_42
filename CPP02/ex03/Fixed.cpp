/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:38:47 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 13:38:52 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():num(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}
Fixed & Fixed::operator=(const Fixed &number)
{
	this->num = number.num;
	return (*this);
}

Fixed::Fixed(const int intval)
{
	this->num = intval << frac_bits;
}

Fixed::Fixed(const float floatval)
{
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
	return num;
}

void	Fixed::setRawBits( int const raw )
{
	num = raw;
}


bool Fixed::operator>(const Fixed &number)
{
	return (this->num > number.num);
}

bool Fixed::operator<(const Fixed &number)
{
	return (this->num < number.num);
}

bool Fixed::operator>=(const Fixed &number)
{
	return (this->num >= number.num);
}

bool Fixed::operator<=(const Fixed &number)
{
	return (this->num <= number.num);
}

bool Fixed::operator==(const Fixed &number)
{
	return (this->num == number.num);
}

bool Fixed::operator!=(const Fixed &number)
{
	return (this->num != number.num);
}

Fixed Fixed::operator+(const Fixed &number) const
{
	Fixed retval(this->toFloat() + number.toFloat());
	return (retval);
}

Fixed Fixed::operator-(const Fixed &number) const
{
	Fixed retval(this->toFloat() - number.toFloat());
	return (retval);
}

Fixed Fixed::operator*(const Fixed &number) const
{
	Fixed retval(this->toFloat() * number.toFloat());
	return (retval);
}

Fixed Fixed::operator/(const Fixed &number) const
{
	Fixed retval(this->toFloat() / number.toFloat());
	return (retval);
}

Fixed Fixed::operator++(int)
{
	Fixed retval = *this;
	this->num++;
	return (retval);
}

Fixed &Fixed::operator++()
{
	this->num++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed retval = *this;
	this->num--;
	return (retval);
}

Fixed &Fixed::operator--()
{
	this->num--;
	return (*this);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1.num < f2.num)
		return (f1);
	return (f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1.num > f2.num)
		return (f1);
	return (f2);
}
