#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "FragTrap.hpp"
#include <iostream>

class ScavTrap {
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &cpy);
        ~ScavTrap(void);

        ScavTrap        &operator=(const ScavTrap &r);

        void            challengeNewcomer(std::string const &target);
        void            rangedAttack(std::string const &target);
        void            meleeAttack(std::string const &target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);

        std::string     getName(void);
        unsigned int    getHp(void);
        unsigned int    getMaxHp(void);
        unsigned int    getEp(void);
        unsigned int    getMaxEp(void);
        unsigned int    getLevel(void);
        unsigned int    getMeleeDmg(void);
        unsigned int    getRangeDmg(void);
        unsigned int    getArmor(void);
        
    private:
        std::string     _name;
        unsigned int    _hp;
        unsigned int    _maxHp;
        unsigned int    _energyPoints;
        unsigned int    _maxEp;
        unsigned int    _level;
        unsigned int    _meleeDmg;
        unsigned int    _rangedDmg;
        unsigned int    _armor;
};

#endif