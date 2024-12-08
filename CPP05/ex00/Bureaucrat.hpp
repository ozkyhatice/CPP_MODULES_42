/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:45:36 by hozkaya           #+#    #+#             */
/*   Updated: 2024/10/29 13:45:37 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
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