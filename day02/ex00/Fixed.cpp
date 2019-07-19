#include "Fixed.hpp"

Fixed::Fixed(void) {
    this->_fpv = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    //operator=(src);
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

Fixed       &Fixed::operator=(Fixed const &rhc) {
    std::cout << "Assignation operator called" << std::endl;
    setRawBits(rhc.getRawBits());
    return (*this);
}

int                 Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fpv);
}

void                Fixed::setRawBits(int const raw) {
    this->_fpv = raw;
}