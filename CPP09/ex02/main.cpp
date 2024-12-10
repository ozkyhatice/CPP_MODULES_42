#include "PmergeMe.hpp"

int main(int argc,  char **argv)
{

    PmergeMe mrg;
    std::vector <int> vec = {3 ,5, 9, 7, 4};
    mrg.mergeSort(vec);
    mrg.printVector();
    return 0;
}