#include <iostream>
#include "Array.hpp"

int main() {
    try {
        // 1. Creating an empty array
        Array<int> emptyArray;
        std::cout << "Empty array created.\n";

        // 2. Creating an array with specific size and initializing elements
        Array<int> intArray(5);
        for (size_t i = 0; i < 5; ++i) {
            intArray[i] = i * 10;  // Assign values 0, 10, 20, 30, 40
        }
        std::cout << "Initialized intArray: ";
        for (size_t i = 0; i < 5; ++i) {
            std::cout << intArray[i] << " ";
        }
        std::cout << "\n";

        // 3. Creating a copy of the array (testing copy constructor)
        Array<int> copyArray(intArray);
        std::cout << "Copy of intArray created (copyArray): ";
        for (size_t i = 0; i < 5; ++i) {
            std::cout << copyArray[i] << " ";
        }
        std::cout << "\n";

        // 4. Testing the assignment operator
        Array<int> assignedArray;
        assignedArray = intArray;
        std::cout << "Assigned intArray to assignedArray: ";
        for (size_t i = 0; i < 5; ++i) {
            std::cout << assignedArray[i] << " ";
        }
        std::cout << "\n";

        // 5. Accessing elements within bounds
        std::cout << "Accessing elements within bounds of intArray: ";
        for (size_t i = 0; i < 5; ++i) {
            std::cout << intArray[i] << " ";
        }
        std::cout << "\n";

        // 6. Attempting to access elements out of bounds
        try {
            std::cout << "Accessing out of bounds: " << intArray[10] << "\n";
        } catch (const std::out_of_range& e) {
            std::cout << "Caught out_of_range exception as expected.\n";
        }

        // 7. Testing with arrays of different data types (double)
        Array<double> doubleArray(3);
        doubleArray[0] = 1.1;
        doubleArray[1] = 2.2;
        doubleArray[2] = 3.3;
        std::cout << "Initialized doubleArray: ";
        for (size_t i = 0; i < 3; ++i) {
            std::cout << doubleArray[i] << " ";
        }
        std::cout << "\n";

        // 8. Testing with an array of strings
        Array<std::string> stringArray(2);
        stringArray[0] = "Hello";
        stringArray[1] = "World";
        std::cout << "size: " << stringArray.size() <<std::endl;
        std::cout << "Initialized stringArray: ";
        for (size_t i = 0; i < 2; ++i) {
            std::cout << stringArray[i] << " ";
        }
        std::cout << "\n";
        // std::cout << stringArray[-1];
        std::cout << stringArray[10];
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << "\n";
    }
    return 0;
}
