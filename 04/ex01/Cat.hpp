/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:17:00 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 13:32:16 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(std::string type);
        ~Cat();
        Cat(const Cat &cat);
        Cat &operator = (const Cat &cat);
        void makeSound() const;
        void setidea(std::string idea, int index);
        std::string getidea(int index) const;
};

