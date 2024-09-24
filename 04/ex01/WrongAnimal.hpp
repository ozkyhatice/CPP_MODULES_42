/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:37:02 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 13:09:58 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal &animal);
        WrongAnimal &operator = (const WrongAnimal &animal);
        void makeSound() const;
        std::string getType() const;
};

#endif 