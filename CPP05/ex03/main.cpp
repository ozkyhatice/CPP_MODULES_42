/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:51:53 by hozkaya           #+#    #+#             */
/*   Updated: 2024/10/30 13:58:15 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern intern;
    {
        Bureaucrat bureaucrat("meys", 180);
    }
    std::cout << "**************" << std::endl;
    Bureaucrat bureaucrat("meys", 120);
    std::cout << "**************" << std::endl;
    {
        std::cout << bureaucrat << std::endl;
        AForm* form = intern.makeForm("shrubbery creation", "fikarme");
        std::cout << "form sign grade: " << form->getsignGrade() << std::endl;
        bureaucrat.signForm(*form);
        std::cout << "form exec grade: " << form->getexecGrade() << std::endl;
        bureaucrat.executeForm(*form);
        delete form;    
    }
    std::cout << "**************" << std::endl;
    {
        std::cout << bureaucrat << std::endl;

        AForm* form = intern.makeForm("robotomy request", "mucox");
        std::cout << "form sign grade: " << form->getsignGrade() << std::endl;
        bureaucrat.signForm(*form);
        std::cout << "form exec grade: " << form->getexecGrade() << std::endl;
        bureaucrat.executeForm(*form);
        delete form;
    }
    std::cout << "**************" << std::endl;

    {
        std::cout << bureaucrat << std::endl;

        AForm* form = intern.makeForm("presidential pardon", "me");
        std::cout << "form sign grade: " << form->getsignGrade() << std::endl;
        bureaucrat.signForm(*form);
        std::cout << "form exec grade: " << form->getexecGrade() << std::endl;
        bureaucrat.executeForm(*form);
        delete form;    
    }
    return 0;
}