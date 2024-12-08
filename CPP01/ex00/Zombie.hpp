/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:35:44 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 19:35:45 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
class Zombie
{
    private:
        std::string  name;
    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie(void);
        std::string getName();
        void        setName(std::string name);
        void        announce();

};
void randomChump( std::string name );
Zombie* newZombie( std::string name );
#endif