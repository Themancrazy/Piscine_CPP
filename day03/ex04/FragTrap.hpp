#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &cpy);
        ~FragTrap(void);

        FragTrap        &operator=(const FragTrap &r);

        void            vaulthunter_dot_exe(std::string const & target);
        void            rangedAttack(std::string const &target);
        void            meleeAttack(std::string const &target);

    private:
        static std::string     _randAttacks[16];
};


#endif