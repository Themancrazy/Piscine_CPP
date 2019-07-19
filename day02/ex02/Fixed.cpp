#include "Fixed.hpp"

Fixed::Fixed(void) {
    this->_fpv = 0;
}

Fixed::Fixed(Fixed const &src) {
    operator=(src);
}

Fixed::Fixed(int const n) {
    this->_fpv = n << this->_bits;
}

Fixed::Fixed(float const f) {
    this->_fpv = roundf(f * (1 << this->_bits));
}

Fixed::~Fixed(void) {
    return ;
}

Fixed             &Fixed::operator=(Fixed const &copy) {
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

/* -------------------------------Comparaison Fnctions-------------------------------------------*/

bool                Fixed::operator<(Fixed const & res) {
    return (this->toFloat() < res.getRawBits());   
}

bool                Fixed::operator>(Fixed const & res) {
    return (this->toFloat() > res.getRawBits());
}

bool                Fixed::operator<=(Fixed const & res) {
    return (this->toFloat() <= res.getRawBits());
}

bool                Fixed::operator>=(Fixed const & res) {
    return (this->toFloat() >= res.getRawBits());
}

bool                Fixed::operator==(Fixed const & res) {
    return (this->toFloat() == res.getRawBits());
}

bool                Fixed::operator!=(Fixed const & res) {
    return (this->toFloat() != res.getRawBits());
}

/* -------------------------------Arithmetic Fnctions-------------------------------------------*/

Fixed               Fixed::operator+(Fixed const & res) {
    Fixed instance;

    instance.setRawBits(this->getRawBits() + res.getRawBits());
    return (instance);
}

Fixed               Fixed::operator-(Fixed const & res) {
    Fixed instance;

    instance.setRawBits(this->getRawBits() - res.getRawBits());
    return (instance);
}

Fixed               Fixed::operator*(Fixed const & res) {
    Fixed instance;

    instance.setRawBits(this->toFloat() * res.getRawBits());
    return (instance);
}

Fixed               Fixed::operator/(Fixed const & res) {
    Fixed instance;

    if (this->toFloat() == 0)
        return 0;
    instance.setRawBits(this->toFloat() / res.getRawBits());
    return (instance);
}

/* -------------------------------Increment/Decr Fnctions----------------------------------------*/

Fixed               &Fixed::operator++(void) {
    Fixed instance;

    instance.setRawBits(this->_fpv++);
    return (*this);
}

Fixed               Fixed::operator++(int) {
    Fixed instance = *this;

    ++*this;
    return (instance);
}

Fixed               &Fixed::operator--(void) {
    Fixed instance;

    instance.setRawBits(this->_fpv--);
    return (*this);
}

Fixed               Fixed::operator--(int) {
    Fixed instance = *this;

    --*this;
    return (instance);
}

/*------------------------------------------------------------------------------------------------ */

Fixed        &Fixed::min(Fixed &a, Fixed &b) {
    return ((a.getRawBits() < b.getRawBits()) ? a : b);
}

const Fixed  &Fixed::min(Fixed const &a, Fixed const &b) {
    return ((a.getRawBits() < b.getRawBits()) ? a : b);
}

Fixed        &Fixed::max(Fixed &a, Fixed &b) {
    return ((a.getRawBits() > b.getRawBits()) ? a : b);
}

const Fixed  &Fixed::max(Fixed const &a, Fixed const &b) {
    return ((a.getRawBits() > b.getRawBits()) ? a : b);
}   