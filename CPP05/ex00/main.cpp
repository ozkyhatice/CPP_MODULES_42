/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:45:45 by hozkaya           #+#    #+#             */
/*   Updated: 2024/10/30 13:20:05 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main(void)
{
	{
			Bureaucrat obj1("obj1", 151);
	}

	std::cout << std::endl;

	{
			Bureaucrat obj1("obj2", -1);

	}
	std::cout << std::endl;

	{
			Bureaucrat obj1("obj3", 0);

	}
	std::cout << std::endl;

	{

			Bureaucrat obj2("obj4", 151456);
	}
	std::cout << std::endl;

	
	{	

			Bureaucrat obj3("obj5", 3);
			std::cout << obj3 << std::endl;
			obj3.increment();
			std::cout << obj3 << std::endl;
			obj3.increment();
			std::cout << obj3 << std::endl;
			obj3.increment();
			std::cout << obj3 << std::endl;

	}
    std::cout << std::endl;

	{	

			Bureaucrat obj4("obj6", 149);

			std::cout << obj4 << std::endl;
			obj4.decrement();
			std::cout << obj4 << std::endl;
			obj4.decrement();
			std::cout << obj4 << std::endl;
			obj4.decrement();
			std::cout << obj4 << std::endl;

	}
    std::cout << std::endl;
    {	

			Bureaucrat obj4("obj7", 149);

			std::cout << obj4 << std::endl;
            obj4.increment();
			std::cout << obj4 << std::endl;
            obj4.increment();
			std::cout << obj4 << std::endl;

	}
	return (0);
}
