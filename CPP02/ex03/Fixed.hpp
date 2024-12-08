/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:38:52 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 13:38:53 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed{

private:
	int num;
	static const int frac_bits = 8;
public:
	Fixed();
	Fixed(const int intToFix);
	Fixed(const float floatval);
	~Fixed();
	Fixed(const Fixed &copy);
	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	bool operator>(const Fixed &number);
	bool operator<(const Fixed &number);
	bool operator>=(const Fixed &number);
	bool operator<=(const Fixed &number);
	bool operator==(const Fixed &number);
	bool operator!=(const Fixed &number);
	Fixed &operator=(const Fixed &number);
	Fixed operator+(const Fixed &number) const;
	Fixed operator-(const Fixed &number) const;
	Fixed operator*(const Fixed &number) const;
	Fixed operator/(const Fixed &number) const;
	Fixed operator++(int);
	Fixed &operator++();
	Fixed operator--(int);
	Fixed &operator--();
	static Fixed &min(Fixed &f1, Fixed &f2);
	static const Fixed &min(const Fixed &f1, const Fixed &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);
	static const Fixed &max(const Fixed &f1, const Fixed &f2);
};

std::ostream &operator<<(std::ostream &output, const Fixed &fixed);

#endif
