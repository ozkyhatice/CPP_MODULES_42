#include "ScalarConverter.hpp"

bool ScalarConverter::isFloat(std::string &arg)
{
    size_t dotCount = 0;
    bool fCount = (arg.back() == 'f' || arg.back() == 'F');
    if (fCount && std::count(arg.begin(), arg.end(), 'f') + std::count(arg.begin(), arg.end(), 'F') > 1)
        return false;
    for (size_t i = 0; i < arg.length() - fCount; i++)
    {
        if (arg[i] == '.')
            dotCount++;
        else if (!std::isdigit(arg[i]) && arg[i] != '-' && arg[i] != '+')
            return false;
    }
    if (dotCount > 1)
        return false;

    return fCount;
}


bool ScalarConverter::isDouble(std::string &arg)
{
    size_t dotCount = 0;
    for (size_t i = 0; i < arg.length(); i++)
    {
        if (arg[i] == '.')
            dotCount++;
        else if (!std::isdigit(arg[i]) && arg[i] != '-' && arg[i] != '+')
            return false;
    }
    if (dotCount > 1)
        return false;
    return true;
}

bool ScalarConverter::isInt(std::string &arg)
{
    for (size_t i = 0; i < arg.length(); i++)
    {
        if (!std::isdigit(arg[i]) && arg[i] != '-' && arg[i] != '+')
            return false;
    }
    return true;
}