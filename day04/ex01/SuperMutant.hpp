#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include "Enemy.hpp"

class SuperMutant : public Enemy {
    public:
        SuperMutant(void);
        SuperMutant(const SuperMutant &cpy);
        ~SuperMutant(void);

        SuperMutant             &operator=(const SuperMutant &r);

        virtual void            takeDamage(int);
};

#endif