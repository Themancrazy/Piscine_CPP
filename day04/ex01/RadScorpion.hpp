#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion : public Enemy {
    public:
        RadScorpion(void);
        RadScorpion(const RadScorpion &cpy);
        ~RadScorpion(void);

        RadScorpion             &operator=(const RadScorpion &r);

       // virtual void            takeDamage(int);
};


#endif
