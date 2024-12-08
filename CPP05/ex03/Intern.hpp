/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:51:48 by hozkaya           #+#    #+#             */
/*   Updated: 2024/10/29 13:52:34 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern
{
    

    public:
        Intern();
        Intern(const Intern &intern);
        Intern &operator = (const Intern &intern);
        ~Intern();
        AForm* makeForm(std::string name, std::string target);
        class FormException : public std::exception 
                {
                    public:
                        const char* what() const throw() {
                            return "An error occurred in form processing.";
                        }
                };

};