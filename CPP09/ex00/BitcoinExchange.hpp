#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <map>
#include <string>


class BitcoinExchange {
    private:
        std::map <std::string, float> _db;

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &cpy);
        BitcoinExchange &operator=(const BitcoinExchange &cpy);
        ~BitcoinExchange();

        void LoadDatabase(const std::string &filename);
        void PrintDatabase();
        bool isValidDate(const std::string &date) const;
        bool isValidValue(const std::string &value_str) const;
};

#endif