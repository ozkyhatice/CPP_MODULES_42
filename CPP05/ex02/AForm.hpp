/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:47:09 by hozkaya           #+#    #+#             */
/*   Updated: 2024/10/29 13:47:55 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AFORM_HPP
#define AFORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class AForm{
    private:
        const std::string _name;
        bool _signed;
        const int _grade;
        const int _execgrade;
    public:
        AForm(std::string name, int grade, int execgrade);
        AForm(const AForm &form);
        AForm &operator=(const AForm &form);
        ~AForm();
        std::string getName() const;
        bool getSigned() const;
        int getsignGrade() const;
        int getexecGrade() const;
        void beSigned(Bureaucrat &bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return "grade is out of range: grade is too high";
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return "grade is out of range: grade is too low";
                }
        };
        class FormException : public std::exception 
        {
            public:
                const char* what() const throw() {
                    return "An error occurred in form processing.";
                }
        };
};

std::ostream &operator<<(std::ostream &out, const AForm &form);
#endif