#include "Data.hpp"

Data::Data(){}
Data::~Data(){}
Data::Data(const Data &copy)
{
    *this = copy;
}
Data &Data::operator=(const Data &copy)
{
    if (this == &copy)
        return *this;
    return *this;
}


void Data::setName(std::string str)
{
    name = str;
}