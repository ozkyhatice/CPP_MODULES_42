/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:05:16 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 17:22:20 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    std::cout << "---------------------" << std::endl;
    ICharacter* me = new Character("me");
    std::cout << "---------------------" << std::endl;
    
    AMateria* tmp = NULL;
    AMateria* tmp2 = NULL;
    std::cout << "---------------------" << std::endl;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    std::cout << "---------------------" << std::endl;

    std::cout << tmp->getType() << std::endl;
    std::cout << "---------------------" << std::endl;
    
    tmp2 = src->createMateria("cure");
    me->equip(tmp2);
    std::cout << "---------------------" << std::endl;

    std::cout << tmp2->getType() << std::endl;
    std::cout << "---------------------" << std::endl;
    
    ICharacter* bob = new Character("bob");
    std::cout << "---------------------" << std::endl;

    // me->use(-1, *bob);
    me->use(0, *bob);
    me->use(1, *bob);
    // me->use(2, *bob);
    // me->use(3, *bob);
    me->unequip(0);
    me->use(0, *bob);
    // me->use(1, *bob);
    std::cout << "---------------------" << std::endl;
    
    delete bob;
    delete me;
    delete src;
    
    
    // system("leaks materia");
    return 0;
}