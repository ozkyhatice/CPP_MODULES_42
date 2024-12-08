#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>

class Array{
    private:
        T *array;
        size_t len;

    public:
        Array()
        {
            len = 0;
            array = new T[0];
        };
        Array(unsigned int n)
        {
            len = n;
            array = new T[n];
        };
        Array(const Array &copy)
        {
            len = copy.len;
            array = new T[len];
            for (size_t i = 0; i < len; i++)
                array[i] = copy.array[i];
        };
        Array &operator = (const Array &copy)
        {
            if (this != &copy)
            {
                delete[] array;
                len = copy.len;
                array = new T[len];
                for (size_t i = 0; i < len; i++)
                    array[i] = copy.array[i];
            }
            return *this;
        };
        ~Array()
        {
            delete[] array;
        };
        T &operator [] (size_t i)
        {
            if (i >= len || i < 0)
                throw std::out_of_range("out of range");
            else
                return array[i];
        };
        size_t size() const
		{
			return (this->len);
		}
};



#endif