/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:02:26 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 16:04:16 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        materias[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if(materias[i])
            delete materias[i];
    }
}

MateriaSource::MateriaSource(MateriaSource const & copy)
{
    *this = copy;
}

MateriaSource & MateriaSource::operator = (MateriaSource const & copy)
{
    for(int i = 0; i < 4; i++)
    {
        if(materias[i])
            delete materias[i];
        materias[i] = copy.materias[i]->clone();
    }
    return *this;
}
void MateriaSource::learnMateria(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    {
        if(!materias[i])
        {
            materias[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if(materias[i] && materias[i]->getType() == type)
        {
            return materias[i]->clone();
        }
    }
    return NULL;
}