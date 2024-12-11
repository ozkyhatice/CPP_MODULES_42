#include "PmergeMe.hpp"


PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
    this->vector = copy.vector;

}

PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
    if (this != &copy)
        this->vector = copy.vector;
    return (*this);
}

PmergeMe::~PmergeMe(){}

std::vector<int> PmergeMe::merge(std::vector<int> &left, std::vector<int> &right)
{
    std::vector<int> sorted;

    size_t i=0, j = 0;
    while (i < left.size() && j < right.size()){
        if (left[i] <= right[j])
        {
            sorted.push_back(left[i]);
            i++;
        }
        else{
            sorted.push_back(right[j]);
            j++;
        }
    }
    while (i < left.size()){
        sorted.push_back(left[i]);
        i++;
    }
    while (j < right.size())
    {
        sorted.push_back(right[j]);
        j++;
    }
    return (sorted);
}

std::vector<int> PmergeMe::mergeSort(std::vector<int> &vec)
{
    if (vec.size() <= 1) {
        return vec;
    }
    size_t l_size = vec.size() / 2;
    std::vector<int> left(vec.begin(), vec.begin() + l_size);
    std::vector<int> right(vec.begin() + l_size, vec.end());
    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left, right);
}


std::list<int> PmergeMe::mergeL(std::list<int> &left, std::list<int> &right)
{
    std::list<int> sorted;
        while (!left.empty() && !right.empty()) {
            if (left.front() <= right.front()) {
                sorted.push_back(left.front());
                left.pop_front();
            } else {
                sorted.push_back(right.front());
                right.pop_front();
            }
        }
        // Add remaining elements if any
        while (!left.empty()) {
            sorted.push_back(left.front());
            left.pop_front();
        }
        while (!right.empty()) {
            sorted.push_back(right.front());
            right.pop_front();
        }
        return sorted;


}

std::list<int> PmergeMe::mergeSortL(std::list<int> &lst)
{
    if (lst.size() <= 1)
        return lst;
    std::list<int>::iterator mid = lst.begin();
    std::advance(mid, lst.size()/2);
    std::list<int>left(lst.begin(), mid);
    std::list<int>right(mid, lst.end());

    left = mergeSortL(left);
    right = mergeSortL(right);

    return mergeL(left, right);
}

