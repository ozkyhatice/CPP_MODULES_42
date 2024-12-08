#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}
ScalarConverter::ScalarConverter(const ScalarConverter &cpy)
{
    *this = cpy;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &cpy)
{
    if (this == &cpy)
        return *this;
    return *this;
}
ScalarConverter::~ScalarConverter()
{
}


void ScalarConverter::argType(std::string &arg)
{
    if (arg == "nan" || arg == "nanf" || arg == "+inf" 
		|| arg == "-inf" || arg == "+inff" || arg == "-inff")
		otherTypes(arg);
	else
		setType(arg);
}

void ScalarConverter::otherTypes(std::string &arg)
{
    std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (arg == "nanf") {
		std::cout << "float: " << arg << std::endl;
		std::cout << "double: nan" << std::endl;
	} else if (arg == "-inff") {
		std::cout << "float: " << arg << std::endl;
		std::cout << "double: -inf" << std::endl;
	} else if (arg == "+inff") {
		std::cout << "float: " << arg << std::endl;
		std::cout << "double: +inf" << std::endl;
	} else {
		std::cout << "float: " << arg << "f" << std::endl;
		std::cout << "double: " << arg << std::endl;
	}
}

void ScalarConverter::setType(std::string &arg)
{
    try
    {
        if (arg.length() == 1 && std::isalpha(arg[0]) && std::isprint(arg[0]))
        {
            typeChar(arg);
        }
        else if (isDouble(arg))
        {
            typeDouble(arg);
        }
        else if(isFloat(arg))
        {
            typeFloat(arg);
        }
        else if (isInt(arg))
        {
            typeInt(arg);
        }
        else
        {
            throw ImpossibleException();
        }
    }
    catch (const ImpossibleException &e) {
        std::cout << e.what() << std::endl;
    }
    
}