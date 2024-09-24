/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:36:28 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 19:38:57 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("zort club");
        bob.attack();
    }
    {
        //asd 
        Weapon club = Weapon("spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        // Weapon clubb = Weapon("spiked club");
        club.setType("zort club");
        // jim.setWeapon(clubb);
        jim.attack();
    }
    return 0;
}