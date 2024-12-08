#include "Span.hpp"

Span::Span() : _n(0), _vec(std::vector<int>()) {}

Span::Span(unsigned int n) : _n(n), _vec(std::vector<int>()) {}

Span::Span(const Span &cpy) : _n(cpy._n), _vec(cpy._vec) {}

Span &Span::operator=(const Span &cpy)
{
    if (this != &cpy)
    {
        _n = cpy._n;
        _vec = cpy._vec;
    }
    return *this;
}
Span::~Span() {}

const char *Span::FullContainerException::what() const throw()
{
    return "Container is full!";
}


void Span::addNumber(int num)
{
    try{
        if (_vec.size() >= _n)
            throw Span::FullContainerException();
        _vec.push_back(num);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

int Span::shortestSpan()
{
    try{
        if (_vec.size() <= 1)
            throw std::runtime_error("Not enough elements to calculate span!");
        std::sort(_vec.begin(), _vec.end());
        int min = _vec[1] - _vec[0];
        for (size_t i = 0; i < _vec.size() - 1; i++)
        {
            if (_vec[i + 1] - _vec[i] < min)
                min = _vec[i + 1] - _vec[i];
        }
        return min;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
        throw;
    }
}

int Span::longestSpan()
{
    try{
        if (_vec.size() <= 1)
            throw std::runtime_error("Not enough elements to calculate span!");
        std::sort(_vec.begin(), _vec.end());
        return _vec[_vec.size() - 1] - _vec[0];
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
        throw;
    }
}

void Span::addNumber2(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    try{
        size_t rangeSize = std::distance(begin, end);
        if (_vec.size() + rangeSize > _n)
            throw Span::FullContainerException();
        for (; begin != end; begin++)
            _vec.push_back(*begin);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
