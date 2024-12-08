/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:59:40 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 16:01:55 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
class MateriaSource:public IMateriaSource
{
    private:
        AMateria *materias[4];
    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource(MateriaSource const & copy);
        MateriaSource & operator = (MateriaSource const & copy);
        
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif