#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() { }

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy) {
    this->_db = cpy._db;
    this->min_year = cpy.min_year;
}

BitcoinExchange &BitcoinExchange::operator = (const BitcoinExchange &copy) {
    (void)copy;
    if (this != &copy) {
        this->_db = copy._db;
        this->min_year = copy.min_year;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange() { }

int ft_stoi(std::string str) {
    int i = 0;
    int num = 0;
    int isNegative = 0;

    if (str[i] == '-' || str[i] == '+')
        if (str[i++] == '-')
            isNegative = 1;
    while (str[i] >= '0' && str[i] <= '9') {
        num = num * 10 + (str[i++] - '0');
    }
    if (isNegative)
        num *= -1;
    return (num);
}

void BitcoinExchange::read_data() {
    try {
        std::ifstream file("data.csv");

        if (!file.is_open())
            throw std::runtime_error("Data file is not open!");
        std::string line;
        getline(file, line);
        while (getline(file, line)) {
            float val = atof((line.substr(11)).c_str());
            _db[line.substr(0, 10)] = val;
        }
        file.close();
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    min_year = 2024;
    std::map<std::string, float>::iterator it = _db.begin();
    while (it != _db.end()) {
        if (min_year > ft_stoi(it->first.substr(0,4)))
			min_year = ft_stoi(it->first.substr(0,4));
        it++;
    }
}

void BitcoinExchange::read_input(std::string file) {
    try {
        std::ifstream infile(file.c_str());

        if (!infile.is_open())
            throw std::runtime_error("Input file is not open!");
        std::string line;
        getline(infile, line);
        while (getline(infile, line)) {
            lineControl(line);
        }
        infile.close();
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
}

void BitcoinExchange::lineControl(std::string line) {
    if (line.length() <= 11)
        std::cout << "Error: bad input => " << line << std::endl;
    else
    {
        float val = atof((line.substr(13)).c_str());

        int year = ft_stoi(line.substr(0, 4));
        int month = ft_stoi(line.substr(5, 2));
        int day = ft_stoi(line.substr(8, 10));

        if (((year > 2024) || (year < min_year)) || ((month > 12) || (month < 1)) || ((day > 31) || (day < 1)))
            std::cout << "Error: bad input => " << line.substr(0, 10) << std::endl;
        else if (val < 0)
            std::cout << "Error: not a positive number." << std::endl;
        else if (val > 1000)
            std::cout << "Error: too large a number." << std::endl;
        else
            isValidDate(line.substr(0, 10), val);
    }
}
void BitcoinExchange::isValidDate(std::string date, float val) {
    try{
        std::map<std::string, float>::iterator it = _db.find(date);
        if (it != _db.end()) {
            std::cout << date << " => " << val << " = " << (it->second * val) << std::endl;
            return;
        }
        it = _db.lower_bound(date);
        if (it == _db.begin()) {
            throw std::runtime_error("No data available for this date.");
            return;
        }
        --it;
        std::cout << date << " => " << val << " = " << (it->second * val) << std::endl;

    }catch(std::exception &e){
        std::cout << "Error: " << e.what() << std::endl;
    }
}
