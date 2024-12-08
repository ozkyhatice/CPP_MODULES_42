#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
    private:
        unsigned int _n;
        std::vector<int> _vec;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &cpy);
        Span &operator=(const Span &cpy);
        ~Span();
        void addNumber(int num);
        void addNumber2(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
        class FullContainerException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

#endif
