#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <fstream>
#include <cmath>

class Fixed {
    public:
        Fixed(void);
        Fixed(Fixed const &src);
        Fixed(int const n);
        Fixed(float const f);
        ~Fixed(void);

        Fixed              &operator=(Fixed const &copy);

        /* Comparaison */

        bool                operator<(Fixed const & res);
        bool                operator>(Fixed const & res);
        bool                operator<=(Fixed const & res);
        bool                operator>=(Fixed const & res);
        bool                operator==(Fixed const & res);
        bool                operator!=(Fixed const & res);
        
        /* Arithmetic */
        Fixed               operator+(Fixed const & res);
        Fixed               operator-(Fixed const & res);
        Fixed               operator*(Fixed const & res);
        Fixed               operator/(Fixed const & res);
        
        /* Incrementation & Decr */
        
        Fixed               &operator++(void); /*Prefix */
        Fixed               operator++(int); /*Postfix */
        Fixed               &operator--(void);
        Fixed               operator--(int);

        static Fixed        &min(Fixed &a, Fixed &b);
        static const Fixed  &min(Fixed const &a, Fixed const &b);
        static Fixed        &max(Fixed &a, Fixed &b);
        static const Fixed  &max(Fixed const &a, Fixed const &b);    

        int                getRawBits(void) const;
        void               setRawBits(int const raw);
        float              toFloat(void) const;
        int                toInt(void) const;
    private:
        static const int    _bits = 8;
        int                 _fpv;
};

std::ostream       &operator<<(std::ostream &o, Fixed const &r);


#endif