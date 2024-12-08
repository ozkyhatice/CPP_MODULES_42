/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:36:07 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 19:36:08 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string &stringREF = var;
    std::cout<<"The memory address of the string variable: "<<&var<<std::endl;
    std::cout<<"The memory address held by stringPTR: "<<stringPTR << std::endl;
    std::cout<<"The memory address held by stringREF: "<<&stringREF<<std::endl;

    std::cout<<"The value of the string variable: "<<var<<std::endl;
    std::cout<<"The value pointed to by stringPTR: "<<*stringPTR<<std::endl;
    std::cout<<"The value pointed to by stringREF: "<<stringREF<<std::endl;
    return 0;
}