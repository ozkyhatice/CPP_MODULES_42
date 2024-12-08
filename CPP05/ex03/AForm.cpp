/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:51:19 by hozkaya           #+#    #+#             */
/*   Updated: 2024/10/30 13:45:35 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int grade, int execgrade) : _name(name), _grade(grade), _execgrade(execgrade)
{
    _signed = false;
    try{
        if (grade < 1 || execgrade < 1)
            throw AForm::GradeTooHighException();
        if (grade > 150 || execgrade > 150)
            throw AForm::GradeTooLowException();
    }
    catch(std::exception &e)
    {
            std::cout << e.what() << std::endl;
    }
}

AForm::AForm(const AForm &form) : _name(form._name), _grade(form._grade), _execgrade(form._execgrade)
{
}
AForm &AForm::operator=(const AForm &form)
{
    if (this != &form)
        _signed = form._signed;
    return *this;
}
AForm::~AForm()
{
    std::cout << "destructor called" << std::endl;
}
std::string AForm::getName() const
{
    return _name;
}
bool AForm::getSigned() const
{
    return _signed;
}
int AForm::getsignGrade() const
{
    return _grade;
}
int AForm::getexecGrade() const
{
    return _execgrade;
}
void AForm::beSigned(Bureaucrat &bureaucrat)
{
    try{
        if (bureaucrat.getGrade() <= _grade)
        {
            _signed = true;
        }
        else
        {
            throw AForm::GradeTooLowException();
        }

    }
    catch(std::exception &e)
    {
            std::cout << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, const AForm &form)
{
    out << "---AForm---" << std::endl;
    out << "Name: " << form.getName() << std::endl;
    out << "Is Signed: " << (form.getSigned() ? "True" : "False") << std::endl;
    out << "Sign Grade: " << form.getsignGrade() << std::endl;
    out << "Exec Grade: " << form.getexecGrade() << std::endl;
    return out;
}