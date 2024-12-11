#include "PmergeMe.hpp"
#include <cstdlib> // rand, srand
#include <ctime>   // time
#include <sstream>
#include <iomanip>




bool isDuplicateList(std::list<int>& container, int num) {
    for (std::list<int>::iterator it = container.begin(); it != container.end(); ++it) {
        if (*it == num) {
            return true;
        }
    }
    return false;
}

bool isDuplicateVector(std::vector<int>& container, int num) {
    for (std::vector<int>::iterator it = container.begin(); it != container.end(); ++it) {
        if (*it == num) {
            return true;
        }
    }
    return false;
}

void printList(std::list<int>& container) {
    for (std::list<int>::iterator it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";
}

void printVector(std::vector<int>& container) {
    for (std::vector<int>::iterator it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";
}

int stringToInt(const std::string& str) {
    for (size_t i = 0; i < str.size(); ++i) {
        if (!isdigit(str[i])) {
            throw std::invalid_argument("Invalid input: expected a positive integer");
        }
    }

    std::istringstream ss(str);
    int result;
    ss >> result;

    if (ss.fail() || !ss.eof() || result <= 0) {
        throw std::invalid_argument("Invalid input: expected a positive integer");
    }
    return result;
}

double getTimeInMicroseconds(clock_t start, clock_t end) {
    double durationInSeconds = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    return durationInSeconds * 1e6; // Convert seconds to microseconds
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Error" << std::endl;
        std::cout << "Usage: ./PmergeMe <numbers>" << std::endl;
        return 1;
    }

    // Parse the command line arguments into a list or vector of integers
    std::list<int> listNumbers;
    std::vector<int> vectorNumbers;

    // Parsing inputs
    for (int i = 1; i < argc; ++i) {
        try {
            int num = stringToInt(argv[i]);

            // Check for duplicates in list
            if (isDuplicateList(listNumbers, num)) {
                std::cerr << "Error: Duplicate entry \"" << argv[i] << "\" found." << std::endl;
                return 1;
            }
            listNumbers.push_back(num);

            // Check for duplicates in vector
            if (isDuplicateVector(vectorNumbers, num)) {
                std::cerr << "Error: Duplicate entry \"" << argv[i] << "\" found." << std::endl;
                return 1;
            }
            vectorNumbers.push_back(num);

        } catch (std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << " for input \"" << argv[i] << "\"." << std::endl;
            return 1;
        }
    }

    // Timing the sorting of std::list
    clock_t start = clock();
    PmergeMe sorterList;
    std::list<int> sortedList = sorterList.mergeSortL(listNumbers);
    clock_t end = clock();
    std::cout << "Before: ";
    printList(listNumbers);
    std::cout << "After: ";
    printList(sortedList);
    double listTime = 1000.0 * (end - start) / CLOCKS_PER_SEC;
        std::cout << "Time to process a range of " << sortedList.size() << " elements with std::list: " << listTime << " ms\n";

    // Timing the sorting of std::vector
    start = clock();
    PmergeMe sorterVector;
    std::vector<int> sortedVector = sorterVector.mergeSort(vectorNumbers);
    end = clock();
    double vectorTime = 1000.0 * (end - start) / CLOCKS_PER_SEC;
        std::cout << "Time to process a range of " << sortedVector.size() << " elements with std::vector: " << vectorTime << " ms\n";
    // Display results with fixed-point notation and 6 decimal places
    
    return 0;
}
