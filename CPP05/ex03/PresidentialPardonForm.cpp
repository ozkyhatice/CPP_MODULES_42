/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:52:45 by hozkaya           #+#    #+#             */
/*   Updated: 2024/10/30 13:46:03 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src)
{
    *this = src;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
    if (this != &src)
    {
        _target = src._target;
    }
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}

std::string PresidentialPardonForm::getTarget() const
{
    return _target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    try{
        if (executor.getGrade() > this->getexecGrade())
            throw AForm::GradeTooLowException();
        if (!this->getSigned())
            throw AForm::FormException();
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    catch(std::exception &e)
    {
		std::cout << e.what() << std::endl;
    }
}