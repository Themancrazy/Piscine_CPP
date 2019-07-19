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