#include "ScalarType.hpp"

ScalarType::ScalarType(void) {};

ScalarType::ScalarType(std::string type) {
    this->_originalValue = type;
}

ScalarType::ScalarType(const ScalarType &cpy) {
    *this = cpy;
}

ScalarType::~ScalarType(void) {
    return ;
}

ScalarType                      &ScalarType::operator=(const ScalarType &r) {
    this->_originalValue = r._originalValue;
    return *this;
}

const char      *ScalarType::FailedConvertion::what() const throw() {
    return "Convertion failed.";
}

ScalarType::operator char(void) {
    char     c = 0;

    c = static_cast<char>(std::atoi(this->_originalValue.c_str()));
    if (errno) {
        throw FailedConvertion();
    }
    return c;
}

ScalarType::operator int(void) {
    int     c = 0;

    c = static_cast<int>(std::atoi(this->_originalValue.c_str()));
    if (errno) {
        throw FailedConvertion();
    }
    return c;
}

ScalarType::operator float(void) {
    float     c = 0.0;

    try {
        c = static_cast<float>(std::stof(this->_originalValue.c_str()));
    } catch (std::exception) {
        std::cout << "Convertion failed.";
    }
    return c;
}

ScalarType::operator double(void) {
    float     c = 0.0;

    try {
        c = static_cast<float>(std::stof(this->_originalValue.c_str()));
    } catch (std::exception) {
        std::cout << "Convertion failed.";
    }
    return c;
}