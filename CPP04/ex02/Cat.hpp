/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:17:00 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 15:09:04 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
class Cat : public AAnimal
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

