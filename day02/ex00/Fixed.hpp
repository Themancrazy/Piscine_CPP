#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    public:
        Fixed(void);
        Fixed(Fixed const &src);
        ~Fixed(void);

        Fixed              &operator=(Fixed const &rhc);

        int                getRawBits(void) const;
        void               setRawBits(int const raw);
    private:
        static const int    _bits = 8;
        int                 _fpv;
};

#endif