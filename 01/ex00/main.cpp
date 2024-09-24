/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:13:17 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 17:13:18 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main()
{
	Zombie *z = newZombie("deneme1");
	Zombie *z2 = new Zombie("deneme2");
	Zombie *z3 = new Zombie();
	z3->setName("deneme3");
	z->announce();
	z2->announce();
	z3->announce();
	randomChump("deneme4");
	delete z;
	delete z2;
	delete z3;
	return 0;
}