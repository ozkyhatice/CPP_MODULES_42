/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:46:43 by hozkaya           #+#    #+#             */
/*   Updated: 2024/10/29 13:46:50 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class Form{
    private:
        const std::string _name;
        bool _signed;
        const int _grade;
        const int _execgrade;
    public:
        Form(std::string name, int grade, int execgrade);
        Form(const Form &form);
        Form &operator=(const Form &form);
        ~Form();
        std::string getName() const;
        bool getSigned() const;
        int getsignGrade() const;
        int getexecGrade() const;
        void beSigned(Bureaucrat &bureaucrat);
        
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
};

std::ostream &operator<<(std::ostream &out, const Form &form);
#endif