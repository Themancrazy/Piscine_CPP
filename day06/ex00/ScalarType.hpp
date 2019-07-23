#ifndef SCALARTYPE_HPP
#define SCALARTYPE_HPP
#include <iostream>

class ScalarType {
    public:
        ScalarType(void);
        ScalarType(std::string type);
        ScalarType(const ScalarType &cpy);
        ~ScalarType(void);

        ScalarType              &ScalarType::operator=(const ScalarType &r);
    
    private:
        std::string             _originalValue;
};

#endif