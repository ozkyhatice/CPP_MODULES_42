/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:36:14 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 13:36:15 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
    private:
        int num;
        static const int frac_bits = 8;

    public:
        Fixed();
        Fixed(const Fixed &fix);
        Fixed &operator = (const Fixed &fix);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif