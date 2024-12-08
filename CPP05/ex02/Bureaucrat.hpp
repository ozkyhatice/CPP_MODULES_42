/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:48:00 by hozkaya           #+#    #+#             */
/*   Updated: 2024/10/29 13:48:20 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include "AForm.hpp"

#include <iostream>
class AForm;
class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &bureaucrat);
        Bureaucrat &operator=(const Bureaucrat &bureaucrat);
        ~Bureaucrat();
        int getGrade() const;
        std::string getName() const;
        void increment(void);
        void decrement(void);
        void signForm(AForm &form);
        void executeForm(AForm const &form);
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
std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);
#endif