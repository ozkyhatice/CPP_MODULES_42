/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:53:27 by hozkaya           #+#    #+#             */
/*   Updated: 2024/10/29 17:44:52 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &shrb) : AForm(shrb), _target(shrb._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &shrb)
{
    this->_target = shrb._target;
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string ShrubberyCreationForm::getTarget() const
{
    return _target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    try{
        if (executor.getGrade() > this->getexecGrade())
            throw AForm::GradeTooLowException();
        if (!this->getSigned())
            throw AForm::FormException();
        std::ofstream file;
        file.open(_target + "_shrubbery");
        file << "       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\\\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\n";
        file.close();
    }
    catch(std::exception &e)
    {
		std::cout << e.what() << std::endl;
    }
}