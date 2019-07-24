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
    return "impossible";
}

ScalarType::operator char(void) {
    char     c = 0;

    c = static_cast<char>(std::stoi(this->_originalValue.c_str()));
    return c;
}

ScalarType::operator int(void) {
    int     c = 0;

    c = static_cast<int>(std::stoi(this->_originalValue.c_str()));
    return c;
}

ScalarType::operator float(void) {
    float     c = 0.0;

    c = static_cast<float>(std::stof(this->_originalValue.c_str()));
    return c;
}

ScalarType::operator double(void) {
    double     c = 0.0;

    c = static_cast<double>(std::stod(this->_originalValue.c_str()));
    return c;
}