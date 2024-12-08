/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:35:49 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/22 13:30:08 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zom = zombieHorde(10, "zomm");
    for (int i = 0; i < 10; i++)
    {
        std::cout <<"zombi "<< i<<std::endl;
        zom[i].announce();
    }
    delete [] zom;
}