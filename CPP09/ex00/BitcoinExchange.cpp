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

bool BitcoinExchange:: isValidDate(const std::string &date) const{

    if (date.size() != 10 || date[4] != '-' || date[7] != '-') {
            return false;
        }

        int year, month, day;
        char dash1, dash2;
        std::istringstream(date) >> year >> dash1 >> month >> dash2 >> day;

        if (year < 1000 || year > 9999 || month < 1 || month > 12 || day < 1 || day > 31) {
            return false;
        }
        return true;

}


bool BitcoinExchange::isValidValue(const std::string &value_str) const{
        std::stringstream ss(value_str);
        float value;
        ss >> value;

        // Eğer dönüştürme başarılı ise, değeri kontrol et
        if (ss.fail()) {
            return false;  // Değer geçerli bir sayıya dönüştürülemezse
        }

        // Pozitif bir değer olmalı ve 0 ile 10 arasında olmalı
        return (value >= 0 && value <= 10);
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

                    if (!isValidDate(key)) {
                        throw std::runtime_error("Error: invalid date format => " + key);
                    }

                    // Değeri kontrol et
                    if (!isValidValue(value_str)) {
                        throw std::runtime_error("Error: invalid value format or out of range => " + value_str);
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
