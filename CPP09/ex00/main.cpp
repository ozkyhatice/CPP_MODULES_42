#include "BitcoinExchange.hpp"

bool checkHeaderFormat(const std::string& filename) {
    std::ifstream infile(filename.c_str());
    std::string firstLine;
    std::getline(infile, firstLine);
    infile.close();
    if (firstLine == "date | value") {
        return true;
    } else {
        return false;
    }
}

int main(int ac, char *av[]) {
    BitcoinExchange btc;
    if (ac != 2) {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }
    
    if (checkHeaderFormat(av[1])) {
        btc.read_data();
        btc.read_input(av[1]);
    } else {
        std::cout << "The file does not have the correct header format." << std::endl;
        return 1;
    }
}