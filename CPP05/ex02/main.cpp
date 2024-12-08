/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:48:18 by hozkaya           #+#    #+#             */
/*   Updated: 2024/10/30 13:56:46 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main()
{
    Bureaucrat bureaucrat1("B1", 26);
    Bureaucrat bureaucrat2("B2", 46);
    Bureaucrat bureaucrat3("B3", 146);
    Bureaucrat bureaucrat4("B4", 4);

    ShrubberyCreationForm shrubbery("shrubberyy");
    RobotomyRequestForm robotomy("robotomy");
    PresidentialPardonForm presidential("presidental");
    {
        bureaucrat3.signForm(shrubbery);
        bureaucrat3.executeForm(shrubbery);
        
    }
std::cout << "-----------------------------------" << std::endl;
{
        bureaucrat1.signForm(shrubbery);
        bureaucrat1.executeForm(shrubbery);
        
    }
std::cout << "-----------------------------------" << std::endl;
        {
            
            bureaucrat3.signForm(robotomy);
            bureaucrat3.executeForm(robotomy);
        }
std::cout << "-----------------------------------" << std::endl;
{
        bureaucrat1.signForm(robotomy);
        bureaucrat1.executeForm(robotomy);
    
}
    std::cout << "-----------------------------------" << std::endl;

        {
            
            bureaucrat1.signForm(presidential);
            bureaucrat1.executeForm(presidential);
        }

    std::cout << "-----------------------------------" << std::endl;
    {
        bureaucrat4.signForm(presidential);
            bureaucrat4.executeForm(presidential);
        
    }
    std::cout << "-----------------------------------" << std::endl;
    return 0;
}