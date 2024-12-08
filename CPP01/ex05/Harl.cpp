/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:36:45 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 19:36:46 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout<<"\"DEBUG\" level: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;

}

void Harl::info(void)
{
    std::cout<<"\"INFO\" level: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;

}

void Harl::warning(void)
{
    std::cout<<"\"WARNING\" level: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;

}

void Harl::error(void)
{
    std::cout<<"\"ERROR\" level: This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void Harl::complain( std::string level )
{
    void(Harl::*pToFunc[])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    std::string array[4] = {
        "debug", 
        "info",
        "warning",
        "error"
    };
    for (int i = 0; i < 4; i++)
    {
        if (array[i] == level)
        {
            (this->*pToFunc[i])();
            return ;
        }
    }
}
