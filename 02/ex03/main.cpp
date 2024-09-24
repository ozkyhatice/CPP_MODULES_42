/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:39:04 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 13:39:05 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main( void )
{
    const Point a(18, 1.f);
    const Point b(2.f, 1.f);
    const Point c(5.5f, 5.f);
    const Point p1(7, 3);
    const Point p2(3.f, 1.2f);
    const Point p3(4.f, 2.f);
    const Point p4(4, 0);
    const Point p5;

    std::cout << "p1 is " << (bsp(a, b, c, p1) ? "in" : "not in") << " the triangle" << std::endl;
    std::cout << "p2 is " << (bsp(a, b, c, p2) ? "in" : "not in") << " the triangle" << std::endl;
    std::cout << "p3 is " << (bsp(a, b, c, p3) ? "in" : "not in") << " the triangle" << std::endl;
    std::cout << "p4 is " << (bsp(a, b, c, p4) ? "in" : "not in") << " the triangle" << std::endl;
    std::cout << "p5 is " << (bsp(a, b, c, p5) ? "in" : "not in") << " the triangle" << std::endl;
}