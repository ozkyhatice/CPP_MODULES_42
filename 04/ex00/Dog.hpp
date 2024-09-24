/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:14:22 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 13:08:41 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string type);
        virtual ~Dog();
        Dog(const Dog &dog);
        Dog &operator = (const Dog &dog);
        virtual void makeSound() const;
};