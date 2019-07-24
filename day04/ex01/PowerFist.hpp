#ifndef POWERFIST_HPP
#define POWERFIST_HPP
#include "AWeapon.hpp"
#include <iostream>

class PowerFist : public AWeapon {
    public:
        PowerFist(void);
        PowerFist(const PowerFist &cpy);
        ~PowerFist(void);

        PowerFist             &operator=(const PowerFist &r);

        void                    attack(void) const;

};

#endif