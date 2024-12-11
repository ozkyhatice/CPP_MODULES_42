#include "PmergeMe.hpp"

void printVector(std::vector <int> vector)
{
    for(size_t i = 0; i < vector.size(); i++)
        std::cout << vector[i] << " ";
    std::cout << "\n";
}

int main(int argc,  char **argv)
{
    (void) argc;
    (void) argv;
    PmergeMe mrg;
    std::vector <int> vec;
    vec.push_back(1);
    printVector(vec);
    vec.push_back(6);
    printVector(vec);
    vec.push_back(3);
    printVector(vec);
    vec.push_back(2);
    printVector(vec);
    vec.push_back(9);
    printVector(vec);
    vec.push_back(5);
    vec = mrg.mergeSort(vec);
    printVector(vec);
    return 0;
}