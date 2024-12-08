/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:46:52 by hozkaya           #+#    #+#             */
/*   Updated: 2024/10/30 13:36:45 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat obj1("meys", 10);
    std::cout<<obj1<<std::endl;
    {
        Form obj2("fikarme", 9, 9);
        std::cout << obj2<<std::endl;
        obj2.beSigned(obj1);
        std::cout << obj2<<std::endl;
        std::cout << "**************" << std::endl;
        std::cout << "Form Name: " <<obj2.getName()<<std::endl;
        std::cout << "Form Grade: "<< obj2.getsignGrade() << std::endl;
        std::cout << "Obj1 Grade: " << obj1.getGrade()<<std::endl;
        obj1.signForm(obj2);
        std::cout << "Form is signed?: " << obj2.getSigned()<<std::endl;
    }
    std::cout << "*************************" << std::endl;
    {
        Form obj2("mucox", 12, 12);
        std::cout << obj2<<std::endl;
        obj2.beSigned(obj1);
        std::cout << obj2<<std::endl;
        std::cout << "**************" << std::endl;
        std::cout << "Form Name: " <<obj2.getName()<<std::endl;
        std::cout << "Form Grade: "<< obj2.getsignGrade() << std::endl;
        std::cout << "Obj1 Grade: " << obj1.getGrade()<<std::endl;
        obj1.signForm(obj2);
        std::cout << "Form is signed?: " << obj2.getSigned()<<std::endl;
    }


    
}