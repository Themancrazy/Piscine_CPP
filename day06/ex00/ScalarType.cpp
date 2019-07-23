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