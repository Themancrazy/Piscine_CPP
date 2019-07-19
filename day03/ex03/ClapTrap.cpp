#include "ClapTrap.hpp"
#define PURPLE "\x1b[94m"
#define RESET "\x1b[0m"

/* ----------------------------CONSTRUCTOR/DESTR----------------------------------*/

ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int mhp,unsigned int energyPoints,
    unsigned int maxEp, unsigned int level, unsigned int meleeDmg, unsigned int rangedDmg,
    unsigned int armor) : _name(name), _hp(hp), _maxHp(mhp), _energyPoints(energyPoints), _maxEp(maxEp),
    _level(level), _meleeDmg(meleeDmg), _rangedDmg(rangedDmg), _armor(armor)
{
    std::cout << PURPLE"<CL4G-TP> Hey " << name << "So, this one time, I went to a party, and there was a beautiful subatomic "\
    << "particle accelerator there. Our circuits locked across the room and... I don't remember what happened next. "\
    << "I mean, I can't. We coulda gotten married and had gadgets together, but now, I'll never know." RESET << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &cpy) :
        _name(cpy._name), _hp(cpy._hp), _maxHp(cpy._maxHp), _energyPoints(cpy._energyPoints), _maxEp(cpy._maxEp),
        _level(cpy._level), _meleeDmg(cpy._meleeDmg), _rangedDmg(cpy._rangedDmg), _armor(cpy._armor)
{
    std::cout << PURPLE"<CL4G-TP> Hey " << cpy._name << "So, this one time, I went to a party, and there was a beautiful subatomic "\
    << "particle accelerator there. Our circuits locked across the room and... I don't remember what happened next. "\
    << "I mean, I can't. We coulda gotten married and had gadgets together, but now, I'll never know." RESET << std::endl;
}

ClapTrap::~ClapTrap(void) {
    std::cout << PURPLE"<CL4G-TP> I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" RESET << std::endl;
}

/* ----------------------------DEFENSE-------------------------------------*/

void            ClapTrap::takeDamage(unsigned int amount) {
    std::cout << PURPLE"<CL4G-TP> I'm.. INVINCIB- ARGH, please don't hurt me!!" RESET << std::endl;
    if ((this->_hp - (amount - this->_armor)) <= this->_maxHp) {
        std::cout << PURPLE"<CL4G-TP> hrrggr.. We're taking damage " << this->_name << " (" << amount - this->_armor <<\
        " dmg)! Do something, I'm busy with the screwdriver!" RESET << std::endl;
        this->_hp -= (amount - this->_armor);
    }
    else
        this->_hp = 0;
}

void            ClapTrap::beRepaired(unsigned int amount) {
    std::cout << PURPLE"<CL4G-TP> Huhuhu, I'm here to stay motherfuckers!! I've found some sweeeet life juice hehehe.." RESET << std::endl;
    if ((this->_hp + amount) >= this->_maxHp) {
        std::cout << PURPLE"<CL4G-TP> There you go.. (" << this->_maxHp - this->_hp << " hp added)\
        *screams* HELL YAAAHHHH I'M BACK IN THE GAME NOW LOSERS!!" RESET << std::endl;
        this->_hp = this->_maxHp;
    }
    else if ((this->_hp + amount) < this->_maxHp) {
        std::cout << PURPLE"<CL4G-TP> There you go.. (" << amount << " hp added) \
        *screams* HELL YAAAHHHH I'M BACK IN THE GAME NOW LOSERS!!" RESET << std::endl;
        this->_hp += amount;
    }
}