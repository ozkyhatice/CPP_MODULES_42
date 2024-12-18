#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <cstdlib>
#include <stdexcept>

class BitcoinExchange {
    private:
        std::map<std::string, float> _db;
        int min_year;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &cpy);
        BitcoinExchange &operator = (const BitcoinExchange &cpy);
        ~BitcoinExchange();

        void read_data();
        void read_input(std::string input_file_name);
        void lineControl(std::string line);
        void isValidDate(std::string date, float value);
};

#endif