#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include "easyfind.hpp"

const char* NotFoundException::what() const throw() {
    return "This number is not in the container!";
}

#endif