/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:36:16 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 19:36:17 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon &weapon;
        std::string name;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack();
        void    setWeapon(Weapon &weapon);

};
#endif