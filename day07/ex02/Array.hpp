#include <iostream>

template<typename T>
class Array {
    public:
        Array(void) {this->_myArray = nullptr; this->_n = 0;}
        Array(const Array &cpy){*this = cpy;}
        Array(unsigned int n) {
            this->_n = n;
            this->_myArray = new T [n];
        }
        ~Array(void){delete [] _myArray;}

        Array               &operator=(const Array &r) {this->_n = r._n;this->_myArray = r._myArray;return *this;}

        struct outOfBound : public std::exception {
            const char*     what() const throw(){
                return "Out of bound in operator[], idiot.";
            }
        };

        T                   operator[](unsigned int n) {
            if (n >= this->_n) {
                throw std::exception();
            }
            return this->_myArray[n];
        }
        unsigned int        size(void) const {return this->_n;}
    private:
        T                   *_myArray;
        unsigned int        _n;
};