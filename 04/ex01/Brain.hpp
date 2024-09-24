/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:15:03 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 13:41:19 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
    public:
        std::string ideas[100];
        Brain();
        ~Brain();
        Brain(const Brain &brain);
        Brain &operator = (const Brain &brain);
        
};

#endif
