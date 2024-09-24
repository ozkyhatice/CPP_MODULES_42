/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:17:13 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 15:22:03 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    std::cout << "---------------------" << std::endl;
    
    Cat cat("Cat");
    Dog dog("Dog");
    cat.makeSound();
    dog.makeSound();
    cat.setidea("I am a cat", 0);
    std::cout << cat.getidea(0) << std::endl;
    std::cout << "---------------------" << std::endl;

    for(int i = 0; i < 100; i++)
    {
        std::cout << cat.getidea(i) << std::endl;
    }
    std::cout << "---------------------" << std::endl;
    for(int i = 0; i < 100; i++)
    {
        dog.setidea("I am a dog", i);
    }
    std::cout << "---------------------" << std::endl;

    for(int i = 0; i < 10; i++)
    {
        std::cout << dog.getidea(i) << std::endl;
    }
    std::cout << "---------------------" << std::endl;
    // Animal *animal = new Animal();
    // (void)animal;
    // system("leaks animallll");
}
