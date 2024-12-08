#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        MutantStack();
        MutantStack(const MutantStack &cpy);
        MutantStack &operator=(const MutantStack &cpy);
        iterator begin();
        iterator end();
        ~MutantStack();
};

#include "MutantStack.tpp"

#endif
