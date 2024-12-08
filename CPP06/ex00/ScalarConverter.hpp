#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
class ScalarConverter
{
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &cpy);
        ScalarConverter &operator=(const ScalarConverter &oper);
        ~ScalarConverter();

        void argType(std::string &arg);
        void otherTypes(std::string &arg);
        void setType(std::string &arg);

        void typeChar(std::string &arg);
        void typeInt(std::string &arg);
        void typeFloat(std::string &arg);
        void typeDouble(std::string &arg);

        bool isDouble(std::string &arg);
        bool isFloat(std::string &arg);
        bool isInt(std::string &arg);


        class ImpossibleException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return "impossible";
                }
        };
};


#endif