/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:14:55 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 16:55:09 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(std::string type);
        virtual ~AAnimal();
        AAnimal(const AAnimal &animal);
        AAnimal &operator = (const AAnimal &animal);
        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif 