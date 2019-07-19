#include "Fixed.hpp"

Fixed::Fixed(void) {
    this->_fpv = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl;
    operator=(src);
}

Fixed::Fixed(int const n) {
    std::cout << "Int constructor called" << std::endl;
    this->_fpv = n << this->_bits;
}

Fixed::Fixed(float const f) {
    std::cout << "Float constructor called" << std::endl;
    this->_fpv = roundf(f * (1 << this->_bits));
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

Fixed             &Fixed::operator=(Fixed const &copy) {
    std::cout << "Assignation operator called" << std::endl;
    setRawBits(copy.getRawBits());
    return (*this);
}

int               Fixed::getRawBits(void) const {
    return (this->_fpv);
}

void              Fixed::setRawBits(int const raw) {
    this->_fpv = raw;
}

float             Fixed::toFloat(void) const {
    return (this->_fpv / (float)(1 << Fixed::_bits));
}

int               Fixed::toInt(void) const {
    return (this->_fpv >> this->_bits);
}

std::ostream       &operator<<(std::ostream &o, Fixed const &r) {
    o << r.toFloat();
	return (o);
}