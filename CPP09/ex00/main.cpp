#include "BitcoinExchange.hpp"

int main(int ac, char *av[]) {
    BitcoinExchange btc;
    if (ac != 2) {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }
    btc.LoadDatabase(av[1]);
    btc.PrintDatabase();

}