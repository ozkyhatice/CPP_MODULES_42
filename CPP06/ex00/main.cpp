#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error: Invalid number of arguments" << std::endl;
        return 1;
    }
    ScalarConverter sc;
    std::string arg = av[1];
    sc.argType(arg);
    return 0;
}