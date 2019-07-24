#ifndef SCALARTYPE_HPP
#define SCALARTYPE_HPP
#include <iostream>

class ScalarType {
    public:
        ScalarType(void);
        ScalarType(std::string type);
        ScalarType(const ScalarType &cpy);
        virtual ~ScalarType(void);

        ScalarType              &operator=(const ScalarType &r);

        struct FailedConvertion : public std::exception {
            const char*     what() const throw();
        };
        operator                char(void);
        operator                double(void);
        operator                float(void);
        operator                int(void);

    private:
        std::string             _originalValue;
};

#endif