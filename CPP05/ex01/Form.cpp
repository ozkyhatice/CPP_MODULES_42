/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:46:36 by hozkaya           #+#    #+#             */
/*   Updated: 2024/10/30 13:27:34 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int grade, int execgrade) : _name(name), _grade(grade), _execgrade(execgrade)
{
    _signed = false;
    try
    {
        if (grade < 1 || execgrade < 1)
            throw Form::GradeTooHighException();
        if (grade > 150 || execgrade > 150)
            throw Form::GradeTooLowException();

    }
    catch(std::exception &e)
    {
		std::cout << e.what() << std::endl;
    }
}

Form::Form(const Form &form) : _name(form._name), _grade(form._grade), _execgrade(form._execgrade)
{
}
Form &Form::operator=(const Form &form)
{
    if (this != &form)
        _signed = form._signed;    
    return *this;
}
Form::~Form()
{
    std::cout << "destructor called" << std::endl;
}
std::string Form::getName() const
{
    return _name;
}
bool Form::getSigned() const
{
    return _signed;
}
int Form::getsignGrade() const
{
    return _grade;
}
int Form::getexecGrade() const
{
    return _execgrade;
}
void Form::beSigned(Bureaucrat &bureaucrat)
{
    try{
        if (bureaucrat.getGrade() <= _grade)
        {
            _signed = true;
        }
        else
        {
            throw Form::GradeTooLowException();
        }

    }
    catch(std::exception &e)
    {
		std::cout << e.what() << std::endl;
    }
}
std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "---Form---" << std::endl;
    out << "Name: " << form.getName() << std::endl;
    out << "Is Signed: " << (form.getSigned() ? "True" : "False") << std::endl;
    out << "Sign Grade: " << form.getsignGrade() << std::endl;
    out << "Exec Grade: " << form.getexecGrade() << std::endl;
    return out;
}