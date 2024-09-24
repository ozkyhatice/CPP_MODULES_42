/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:57:13 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 14:57:14 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

    public:
        FragTrap(std::string Name);
        FragTrap();
        ~FragTrap();
        FragTrap(const FragTrap &copy);
        FragTrap &operator=(const FragTrap &copy);
        void highFivesGuys();
};

#endif