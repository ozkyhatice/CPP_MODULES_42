/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:27:52 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 16:43:56 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        virtual ~Cure();
        Cure(Cure const & copy);
        Cure & operator = (Cure const & copy);
        
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif