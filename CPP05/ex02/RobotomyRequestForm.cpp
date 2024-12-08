/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:49:10 by hozkaya           #+#    #+#             */
/*   Updated: 2024/10/30 13:43:50 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &shrb) : AForm(shrb), _target(shrb._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &shrb)
{
    this->_target = shrb._target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string RobotomyRequestForm::getTarget() const
{
    return _target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    try{
        if (executor.getGrade() > this->getexecGrade())
            throw AForm::GradeTooLowException();
        if (!this->getSigned())
            throw AForm::FormException();

        std::cout << "--drilling noises--" << std::endl;
        if (rand() % 2)
            std::cout << _target << " has been robotomized successfully" << std::endl;
        else
            std::cout << _target << " has failed to be robotomized" << std::endl;
    }
    catch(std::exception &e)
    {
		std::cout << e.what() << std::endl;
    }


}
    