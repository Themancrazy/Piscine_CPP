#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
    public:
        ClapTrap(std::string name, unsigned int hp, unsigned int maxHp, unsigned int energyPoints,
        unsigned int maxEp, unsigned int level, unsigned int meleeDmg, unsigned int rangedDmg,
        unsigned int armor);
        ClapTrap(const ClapTrap &cpy);
        ~ClapTrap(void);

        ClapTrap        &operator=(const ClapTrap &r);

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
        
    protected:
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