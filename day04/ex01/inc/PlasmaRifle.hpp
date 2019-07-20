#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP
#include "AWeapon.hpp"
#include <iostream>

class PlasmaRifle : public AWeapon {
    public:
        PlasmaRifle(void);
        PlasmaRifle(const PlasmaRifle &cpy);
        ~PlasmaRifle(void);

        PlasmaRifle             &operator=(const PlasmaRifle &r);

        void                    attack(void) const;

};

#endif