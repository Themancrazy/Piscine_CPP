#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class SuperTrap : public virtual NinjaTrap, public virtual FragTrap {
    public:
        SuperTrap(const SuperTrap &cpy);
        SuperTrap(std::string name);
        ~SuperTrap(void);

        SuperTrap       &operator=(const SuperTrap &r);

        void            rangedAttack(const std::string &target);
        void            meleeAttack(const std::string &target);
};

#endif