#pragma once
#ifndef DATA_HPP
#define DATA_HPP
#include <iostream>

class Data{
    private:
        std::string name;
    public:
        Data();
        Data(const Data &copy);
        Data &operator=(const Data &copy);
        ~Data();
        void setName(std::string str);
};
#endif