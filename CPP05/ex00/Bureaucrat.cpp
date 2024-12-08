/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:45:32 by hozkaya           #+#    #+#             */
/*   Updated: 2024/10/29 13:45:33 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    _grade = grade;
    try{
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    catch(std::exception &e){
		std::cout << e.what() << std::endl;
    }
}
Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _name(bureaucrat._name)
{
    _grade = bureaucrat._grade;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
    if (this != &bureaucrat)
        _grade = bureaucrat._grade;
    return *this;
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "destructor called" << std::endl;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}
std::string Bureaucrat::getName() const
{
    return _name;
}
void Bureaucrat::increment(void)
{
    try{
        if (_grade <= 1)
            throw Bureaucrat::GradeTooHighException();
    _grade--;
    }
    catch(std::exception &e)
    {
		std::cout << e.what() << std::endl;
    }
}

void Bureaucrat::decrement(void)
{
    try{
        if (_grade >= 150)
            throw Bureaucrat::GradeTooLowException();
        _grade++;
    }
    catch(std::exception &e)
    {
		std::cout << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return out;
}
