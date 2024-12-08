/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:36:36 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 19:36:37 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;

    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        const std::string& getType(void);
        void    setType(std::string type);
};
#endif