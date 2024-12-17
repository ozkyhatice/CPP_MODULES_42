#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
    _min_year = 9999;

}
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

int BitcoinExchange::ft_stoi(const std::string &str) const {
    int value = 0;
    for (size_t i = 0; i < str.size(); ++i) {
        value = value * 10 + (str[i] - '0');
    }
    return value;
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
int BitcoinExchange::getMinYear()  {

    // Veritabanında (map) her öğe üzerinde döngü yapıyoruz.
    std::map<std::string, float>::const_iterator it = _db.begin();
    while (it != _db.end()) {
        // Yıl kısmını alıyoruz (anahtarın ilk 4 karakteri).
        int year = ft_stoi(it->first.substr(0, 4)); // Anahtarın ilk 4 karakterini alıyoruz.
        
        // En küçük yılı buluyoruz.
        if (_min_year > year)
            _min_year = year;

        ++it; // Bir sonraki öğeye geçiyoruz.
    }

    return _min_year; // En küçük yılı döndürüyoruz.
}
void BitcoinExchange::LoadDatabase(const std::string &file) {
    try {
        std::ifstream file("data.csv");
        if (!file.is_open()) {
            throw std::runtime_error("Error: could not open file.");
        }

        std::string line;
        std::getline(file, line); 
        while (std::getline(file, line)) {



            std::istringstream iss(line);
            std::string key;
            std::string value_str;

            // Hem virgül (',') hem de pipe ('|') karakterini kontrol et
            size_t delimiter_pos = line.find_first_of(",");

            if (delimiter_pos != std::string::npos && delimiter_pos >= 10) {
                key = line.substr(0, delimiter_pos); // İlk 10 karakteri al
                value_str = line.substr(delimiter_pos + 1); // Geri kalan kısmı değer olarak al
                float value;
                std::stringstream(value_str) >> value;
                _db[key] = value;
            } else {
                throw std::runtime_error("Error: bad input format => " + line);
            }
        file.close();
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    execInput(file);
}

void BitcoinExchange::isValidLine(std::string line)
{
     try {
        if (line.length() <= 11) {
            throw std::invalid_argument("bad input");
        }

        float value = atof(line.substr(13).c_str());

        int year = ft_stoi(line.substr(0, 4));
        int month = ft_stoi(line.substr(5, 2));
        int day = ft_stoi(line.substr(8, 2)); 

-        if (year < getMinYear() || year > 2022 || month < 1 || month > 12 || day < 1 || day > 31) {
            throw std::invalid_argument("bad input");
        }

8        if (value < 0) {
            throw std::out_of_range("not a positive number");
        }

        if (value > 1000) {
            throw std::out_of_range("too large a number");
        }
        std::string date  = line.substr(0, 10);
        std

    } catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << " => " << line.substr(0, 10) << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
}

void BitcoinExchange::execInput(const std::string &file)
{
    try{
        std::ifstream infile(file.c_str());
        if (!infile.is_open())
            throw std::runtime_error("Error: could not open file.");
        std::string line;
        getline(infile, line);
        while (getline(infile, line))
            isValidline(line);
        infile.close();
    }catch(std::exception &e)
        std::cerr << e.what() << std::endl;

}


void BitcoinExchange::PrintDatabase() {
    for (std::map<std::string, float>::iterator it = _db.begin(); it != _db.end(); ++it) {
        std::cout << it->first << " " << it->second << std::endl;
    }
}
