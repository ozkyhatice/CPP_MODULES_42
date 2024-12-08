/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:36:40 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/22 13:36:36 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int check_arg(std::string argv1, std::string argv2, std::string argv3)
{
    if (argv1.empty() || argv2.empty() || argv3.empty())
    {
        std::cout << "ERROR: Empty argument/arguments!" << std::endl;
        return 0;
    }
    else if (argv2.compare(argv3) == 0)
    {
        std::cout << "ERROR: String-1 same with String-2. They've to be different!" << std::endl;
        return 0;
    }
    return 1;
}

int main(int argc, char **argv)
{
    if (argc < 4)
    {
        std::cout << "ERROR: Invalid anput. Please enter this format!\n  \"./Sed <filename> <String-1> <String-2>\"" << std::endl;
        return 0;
    }
    int check = check_arg(argv[1], argv[2], argv[3]);
    if (!check)
        return check;
    std::string file = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    int len = s1.length();
    std::string myText;
    std::ifstream MyReadFile(file);
    if (!MyReadFile.is_open())
    {
        std::cout<<"error"<<std::endl;
        return (0);
    }
    std::string copyfile = file + ".replace";
    std::ofstream MyFile(copyfile);
    if (!MyFile.is_open())
    {
        std::cout<<"error"<<std::endl;
        return 0;
    }

    while (std::getline (MyReadFile, myText)) {
        size_t pos = myText.find(s1);
        while (pos != std::string::npos) {
            myText.erase(pos, len);
            myText.insert(pos, s2);
            pos = myText.find(s1);
        }
        MyFile << myText << std::endl;
}
    MyReadFile.close();
    MyFile.close();
    return (0);

}