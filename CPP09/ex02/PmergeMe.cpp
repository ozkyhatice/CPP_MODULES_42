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
        if (left[i] <= right[i])
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
    size_t l_size = vec.size() / 2;
    std::vector<int> left(vec.begin(), vec.begin() + l_size);
    std::vector<int> right(vec.begin() + l_size, vec.end());
    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left, right);
}

void PmergeMe::printVector() const
{
    for(size_t i = 0; i < vector.size(); i++)
        std::cout << vector[i] << " ";
}
