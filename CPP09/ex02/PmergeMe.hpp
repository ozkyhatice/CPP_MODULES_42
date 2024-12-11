#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <iostream>
#include <list>



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
        std::list <int> mergeSortL(std::list<int> &list);
        std::list<int> mergeL(std::list<int> &left, std::list<int> &right);

};

#endif
