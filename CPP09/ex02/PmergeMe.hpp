#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <iostream>

class PmergeMe{

    private:
        std::vector<int> vector;

    public:
        PmergeMe();
        PmergeMe(const PmergeMe &copy);
        PmergeMe &operator = (const PmergeMe &copy);
        ~PmergeMe();
        std::vector<int> mergeSort(std::vector<int> &vector);
        std::vector<int> merge(std::vector<int> &left, std::vector<int> &right);
        // void printVector() const;
        


};

#endif