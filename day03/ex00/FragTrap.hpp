#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>

class FragTrap {
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &cpy);
        ~FragTrap(void);

        FragTrap        &operator=(const FragTrap &r);

        void            vaulthunter_dot_exe(std::string const & target);
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