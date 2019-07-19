#include "ClapTrap.hpp"

/* ----------------------------CONSTRUCTOR/DESTR----------------------------------*/

ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int mhp,unsigned int energyPoints,
    unsigned int maxEp, unsigned int level, unsigned int meleeDmg, unsigned int rangedDmg,
    unsigned int armor) : _name(name), _hp(hp), _maxHp(mhp), _energyPoints(energyPoints), _maxEp(maxEp),
    _level(level), _meleeDmg(meleeDmg), _rangedDmg(rangedDmg), _armor(armor)
{
    std::cout << "<CL4G-TP> Hey " << name << "! So, this one time, I went to a party, and there was a beautiful subatomic "\
    << "particle accelerator there. Our circuits locked across the room and... I don't remember what happened next. "\
    << "I mean, I can't. We coulda gotten married and had gadgets together, but now, I'll never know." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &cpy) :
        _name(cpy._name), _hp(cpy._hp), _maxHp(cpy._maxHp), _energyPoints(cpy._energyPoints), _maxEp(cpy._maxEp),
        _level(cpy._level), _meleeDmg(cpy._meleeDmg), _rangedDmg(cpy._rangedDmg), _armor(cpy._armor)
{
    std::cout << "<CL4G-TP> Hey " << cpy._name << "! So, this one time, I went to a party, and there was a beautiful subatomic "\
    << "particle accelerator there. Our circuits locked across the room and... I don't remember what happened next. "\
    << "I mean, I can't. We coulda gotten married and had gadgets together, but now, I'll never know." << std::endl;
}

ClapTrap::ClapTrap(void) {
    std::cout << "<CL4G-TP> This is the basic constructor made just for you!" << std::endl;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "<CL4G-TP> I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

/* ----------------------------DEFENSE-------------------------------------*/

void            ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "<CL4G-TP> I'm.. INVINCIB- ARGH, please don't hurt me!!" << std::endl;
    if ((this->_hp - (amount - this->_armor)) <= this->_maxHp) {
        std::cout << "<CL4G-TP> hrrggr.. We're taking damage " << this->_name << " (" << amount - this->_armor <<\
        " dmg)! Do something, I'm busy with the screwdriver!" << std::endl;
        this->_hp -= (amount - this->_armor);
    }
    else
        this->_hp = 0;
}

void            ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "<CL4G-TP> Huhuhu, I'm here to stay motherfuckers!! I've found some sweeeet life juice hehehe.." << std::endl;
    if ((this->_hp + amount) >= this->_maxHp) {
        std::cout << "<CL4G-TP> There you go.. (" << this->_maxHp - this->_hp << " hp added)\
        *screams* HELL YAAAHHHH I'M BACK IN THE GAME NOW LOSERS!!" << std::endl;
        this->_hp = this->_maxHp;
    }
    else if ((this->_hp + amount) < this->_maxHp) {
        std::cout << "<CL4G-TP> There you go.. (" << amount << " hp added) \
        *screams* HELL YAAAHHHH I'M BACK IN THE GAME NOW LOSERS!!" << std::endl;
        this->_hp += amount;
    }
}

/* -------------------------GET STATS---------------------------------- */

std::string     ClapTrap::getName(void) {
    return (this->_name);
}

unsigned int    ClapTrap::getHp(void) {
    return (this->_hp);
}

unsigned int    ClapTrap::getMaxHp(void) {
    return (this->_maxHp);
}

unsigned int    ClapTrap::getEp(void) {
    return (this->_energyPoints);
}

unsigned int    ClapTrap::getMaxEp(void) {
    return (this->_maxEp);
}

unsigned int    ClapTrap::getLevel(void) {
    return (this->_level);
}

unsigned int    ClapTrap::getMeleeDmg(void) {
    return (this->_meleeDmg);
}

unsigned int    ClapTrap::getRangeDmg(void) {
    return (this->_rangedDmg);
}

unsigned int    ClapTrap::getArmor(void) {
    return (this->_armor);
}