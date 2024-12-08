#include "ScalarConverter.hpp"

void ScalarConverter::typeChar(std::string &arg)
{
    try {
        char c = arg[0];
        int i = static_cast<int>(c);
        float f = static_cast<float>(c);
        double d = static_cast<double>(c);

        std::cout << "char: ";
        if (d >= CHAR_MIN && d <= CHAR_MAX && std::isprint(c))
            std::cout << "'" << c << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
        std::cout << "int: " << i << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
    } catch (const ImpossibleException &e) {
        std::cout << e.what() << std::endl;
    }
    catch(std::exception &er)
    {
        std::cout << "impossible" << std::endl;

    }
}
void ScalarConverter::typeInt(std::string &arg)
{
    try {
        int i = std::stoi(arg);
        char c = static_cast<char>(i);
        float f = static_cast<float>(i);
        double d = static_cast<double>(i);

        std::cout << "char: ";
        if (d >= CHAR_MIN && d <= CHAR_MAX && std::isprint(c))
            std::cout << "'" << c << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;

        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
    } catch (const std::out_of_range &) {
        throw ImpossibleException();
    } catch (const ImpossibleException &e) {
        std::cout << e.what() << std::endl;
    }
    catch(std::exception &er)
    {
        std::cout << "impossible" << std::endl;

    }
}

void ScalarConverter::typeFloat(std::string &arg)
{
    try {
        float f = std::stof(arg);
        char c = static_cast<char>(f);
        int i = static_cast<int>(f);
        double d = static_cast<double>(f);

        std::cout << "char: ";
        if (d >= CHAR_MIN && d <= CHAR_MAX && std::isprint(c))
            std::cout << "'" << c << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;

        std::cout << "int: ";
        if (f > INT_MAX || f < INT_MIN)
            throw ImpossibleException();
        else
            std::cout << i << std::endl;

        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	    std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
    } catch (const ImpossibleException &e) {
        std::cout << e.what() << std::endl;
    }
    catch(std::exception &er)
    {
        std::cout << "impossible" << std::endl;

    }
}
void ScalarConverter::typeDouble(std::string &arg)
{
    try {
        double d = std::stod(arg);
        char c = static_cast<char>(d);
        int i = static_cast<int>(d);
        float f = static_cast<float>(d);

        std::cout << "char: ";
        if (d >= CHAR_MIN && d <= CHAR_MAX && std::isprint(c))
		    std::cout << "'" << c << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;

        std::cout << "int: ";
        if (d > INT_MAX || d < INT_MIN)
            throw ImpossibleException();
        else
            std::cout << i << std::endl;

        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	    std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
    } catch (const ImpossibleException &e) {
        std::cout << e.what() << std::endl;
    }
    catch(std::exception &er)
    {
        std::cout << "impossible" << std::endl;

    }

}