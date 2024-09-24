/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:36:51 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 19:36:52 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    std::string level;
    while (1)
    {
        std::cout << "level:";
        std::cin>>level;
        Harl harl;
        harl.complain(level);
    }

}