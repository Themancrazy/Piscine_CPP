#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &cpy);
        ~ScavTrap(void);

        ScavTrap        &operator=(const ScavTrap &r);

        void            challengeNewcomer(std::string const &target);
        void            rangedAttack(std::string const &target);
        void            meleeAttack(std::string const &target);

    private:
        static std::string  randChallenge[8];
};

#endif