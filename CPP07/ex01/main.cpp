#include "iter.hpp"

template <typename T>
void print(T &x)
{
    x += 10;
    std::cout << x << std::endl;
}

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    float floatArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << "intArray: ";
    iter(intArray, 5, print);
    std::cout << "charArray: ";
    iter(charArray, 5, print);
    std::cout << "floatArray: ";
    iter(floatArray, 5, print);

    return 0;
}