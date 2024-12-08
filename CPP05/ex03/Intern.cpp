/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:51:40 by hozkaya           #+#    #+#             */
/*   Updated: 2024/10/30 13:50:23 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern ::  Intern()
{

}
Intern :: Intern(const Intern &intern)
{
    *this = intern;
}

Intern &Intern::operator = (const Intern &intern)
{
    (void) intern;
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Intern destructor" << std::endl;

}

AForm* Intern::makeForm(std::string name, std::string target)
{
    std::string aforms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = 0;
	while (i < 3 && name != aforms[i])
		i++;
	try{
		switch (i)
			{
				case 0:
					std::cout <<  "Intern creates " << name << " form." << std::endl;
					return new ShrubberyCreationForm(target);
				case 1:
					std::cout << "Intern creates " << name << " form." << std::endl;
					return new RobotomyRequestForm(target);
				case 2:
					std::cout  << "Intern creates " << name << " form." << std::endl;
					return new PresidentialPardonForm(target);
				default:
					throw Intern::FormException();
			}
	}
	catch(std::exception &e)
	{
        std::cout << e.what() << std::endl;
		return NULL;
	}
	
}