#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int main() {
    uintptr_t temp;
    Data* data = new Data();

    data->setName("x");

    temp = Serializer::serialize(data);

    std::cout << "Data* -> address: " << data << std::endl;

    std::cout << "uintptr_t -> address: " << temp << std::endl;

    Data* data2 = Serializer::deserialize(temp);
    std::cout << " Data* -> address: " << data2 << std::endl;

    if (data == data2) {
        std::cout << "success" << std::endl;
    } else {
        std::cout << "failure" << std::endl;
    }

    delete data;
    return 0;
}
