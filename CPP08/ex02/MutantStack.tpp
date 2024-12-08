#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &cpy) : std::stack<T>(cpy) {}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &cpy) {
    std::stack<T>::operator=(cpy);
    return (*this);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    try
    {
        return (std::stack<T>::c.begin());
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error accessing begin iterator: " << e.what() << std::endl;
        throw;
    }
    
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    try{
        return (std::stack<T>::c.end());
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error accessing end iterator: " << e.what() << std::endl;
        throw;
    }
}

template<typename T>
MutantStack<T>::~MutantStack() {}

#endif
