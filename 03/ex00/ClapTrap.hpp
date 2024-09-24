/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:55:27 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 14:55:28 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>


class ClapTrap
{
    private:
        std::string Name;
        unsigned int hit;
        unsigned int energy;
        unsigned int attack_damage;
    public:
        ClapTrap(std::string Name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &copy);
        ClapTrap &operator=(const ClapTrap &copy);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void set_name(std::string name);
        std::string get_name();
        void set_hit(unsigned int hit);
        unsigned int get_hit();
        void set_energy(unsigned int energy);
        unsigned int get_energy();
        void set_damage(unsigned int attack_damage);
        unsigned int get_damage();
        // void print_status();
};


#endif