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
        int _min_year;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &cpy);
        BitcoinExchange &operator=(const BitcoinExchange &cpy);
        ~BitcoinExchange();

        void LoadDatabase(const std::string &file);
        void execInput(const std::string &file);
        void isValidLine(std::string line);
        void PrintDatabase();
        bool isValidDate(const std::string &date) const;
        bool isValidValue(const std::string &value_str) const;
        int ft_stoi(const std::string &str) const;
        int getMinYear() ;
};

#endif