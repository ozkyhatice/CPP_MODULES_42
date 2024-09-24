/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:27:56 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 15:29:20 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        virtual ~Ice();
        Ice(Ice const & copy);
        Ice & operator = (Ice const & copy);
        
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
