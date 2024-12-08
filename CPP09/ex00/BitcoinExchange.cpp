#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy) {
    _db = cpy._db;
}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &cpy) {
    if (this != &cpy)
        _db = cpy._db;
    return *this;
}

void BitcoinExchange:: LoadDatabase(const std::string &filename) {
        try {
            std::ifstream file(filename.c_str());
            if (!file.is_open()) {
                throw std::runtime_error("Error: could not open file.");
            }

            std::string line;
            std::getline(file,line);
            while (std::getline(file, line)) {
                std::istringstream iss(line);
                std::string key;
                std::string value_str;

                // Satırı virgül ile ayır
                if (std::getline(iss, key, ',') && std::getline(iss, value_str)) {
                    float value;

                    std::regex date_regex("\\d{4}-\\d{2}-\\d{2}");
                    if (!std::regex_match(key, date_regex)) {
                        throw std::runtime_error("Error: invalid date format => " + key);
                    }
                    // Değeri string'ten float'a çevir
                    std::stringstream(value_str) >> value;
                    if (value_str.empty() || value_str.find_first_not_of("0123456789.") != std::string::npos) {
                        throw std::runtime_error("Error: invalid value format => " + value_str);
                    }

                    // Değer geçerli aralıkta mı kontrol et
                    if (value < 0 || value > 1000) {
                        throw std::runtime_error("Error: invalid value => " + line);
                    }

                    // Veritabanına ekle
                    _db[key] = value;
                } else {
                    throw std::runtime_error("Error: bad input format => " + line);
                }
            }
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }


void BitcoinExchange::PrintDatabase() {
    for (std::map<std::string, float>::iterator it = _db.begin(); it != _db.end(); ++it) {
        std::cout << it->first << " " << it->second << std::endl;
    }
}
