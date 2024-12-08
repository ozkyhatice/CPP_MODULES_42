/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:12:25 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 18:15:37 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    char c;

    if (argc==1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for(int i=1; i < argc; i++)
        for(int j=0; argv[i][j]; j++)
        {
            c = toupper(argv[i][j]);
            std::cout << c;
        }
    std::cout << std::endl;
}