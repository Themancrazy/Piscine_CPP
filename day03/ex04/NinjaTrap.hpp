#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap {
    public:
        NinjaTrap(std::string);
        NinjaTrap(NinjaTrap const &cpy);
        ~NinjaTrap(void);

        NinjaTrap       &operator=(NinjaTrap const &r);

        void            rangedAttack(std::string const &target);
        void            meleeAttack(std::string const &target);

        void            ninjaShoebox(FragTrap &target);
        void            ninjaShoebox(ScavTrap &target);
        void            ninjaShoebox(ClapTrap &target);
        void            ninjaShoebox(NinjaTrap &target);
    private:
};

#endif