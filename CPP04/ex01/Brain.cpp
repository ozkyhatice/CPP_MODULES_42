/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:14:59 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 13:42:03 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain :: Brain()
{
    std::cout << "Brain constructor" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = "BrainZZzzzz...";
    }
}

Brain :: ~Brain()
{
    std::cout << "Brain destructor" << std::endl;
}

Brain :: Brain(const Brain &brain)
{
    std::cout << "Brain copy constructor" << std::endl;
    *this = brain;
}

Brain &Brain::operator=(const Brain &brain)
{
    std::cout << "Brain operator =" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = brain.ideas[i];
    }
    return *this;
}