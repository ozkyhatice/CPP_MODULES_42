/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:35:59 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 19:38:05 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string  Name;
    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie(void);
        std::string getName(void);
        void        setName(std::string name);
        void        announce(void);

};
Zombie* zombieHorde( int N, std::string name );

#endif