#include "ScavTrap.hpp"

/* ------------------------------RANDOM ATTACKS LIST----------------------------*/

std::string     randChallenge[8] = {
    "Drug consummer",
    "Rape the machine",
    "Cat throwing",
    "Sucide (first one to kill himself)",
    "No challenge",
    "42",
    "Rush00",
    "Jump out of a moving space-rocket"
};

/* ----------------------------CONSTRUCTOR/DESTR------------------------------------*/

ScavTrap::ScavTrap(std::string name) :
    _name(name), _hp(100), _maxHp(100), _energyPoints(50),_maxEp(50), _level(1),
    _meleeDmg(20), _rangedDmg(15), _armor(3) 
{
        std::cout << "<SC4G-TP> Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) :
    _name(cpy._name), _hp(cpy._hp), _maxHp(cpy._maxHp), _energyPoints(cpy._energyPoints), _maxEp(cpy._maxEp), _level(cpy._level),
    _meleeDmg(cpy._meleeDmg), _rangedDmg(cpy._rangedDmg), _armor(cpy._armor) 
{
        std::cout << "<SC4G-TP> Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "<SC4G-TP> I'll stop talking when I'm dead!! ... Fuc-- <VERY LARGE EXPLOSION>" << std::endl;
}

/*-----------------------------OVERLOADING ---------------------------------------- */

ScavTrap        &ScavTrap::operator=(const ScavTrap &r) {
    this->_name = r._name;
    this->_hp = r._hp;
    this->_maxHp = r._maxHp;
    this->_energyPoints = r._energyPoints;
    this->_maxEp = r._maxEp;
    this->_rangedDmg = r._rangedDmg;
    this->_meleeDmg = r._meleeDmg;
    this->_level = r._level;
    this->_armor = r._armor;
    return *this;
}

/* ----------------------------ATTACKS------------------------------------*/

void            ScavTrap::rangedAttack(std::string const &target) {
    std::cout << "<SC4G-TP> " << this->_name << ", attacking from a distance is a bitch move but you inflicted " <<\
    this->_rangedDmg << " dmg to " << target << std::endl;
}

void            ScavTrap::meleeAttack(std::string const &target) {
    std::cout << "<SC4G-TP> " << this->_name << " C'MON HIT IT, HIT IIITTTT (" <<\
    this->_rangedDmg << " dmg inflicted to " << target << ")" << std::endl;
}

/* ----------------------------DEFENSE-------------------------------------*/

void            ScavTrap::takeDamage(unsigned int amount) {
    std::cout << "<SC4G-TP> I'm.. INVINCIB- ARGH, please don't hurt me!!" << std::endl;
    if ((this->_hp - (amount - this->_armor)) <= this->_maxHp) {
        std::cout << "<SC4G-TP> hrrggr.. We're taking damage " << this->_name << " (" << amount - this->_armor <<\
        " dmg)! Do something, I'm busy with the screwdriver!" << std::endl;
        this->_hp -= (amount - this->_armor);
    }
    else
        this->_hp = 0;
}

void            ScavTrap::beRepaired(unsigned int amount) {
    std::cout << "<SC4G-TP> Huhuhu, I'm here to stay motherfuckers!! I've found some sweeeet life juice hehehe.." << std::endl;
    if ((this->_hp + amount) >= this->_maxHp) {
        std::cout << "<SC4G-TP> There you go.. (" << this->_maxHp - this->_hp << " hp added)\
        *screams* HELL YAAAHHHH I'M BACK IN THE GAME NOW LOSERS!!" << std::endl;
        this->_hp = this->_maxHp;
    }
    else if ((this->_hp + amount) < this->_maxHp) {
        std::cout << "<SC4G-TP> There you go.. (" << amount << " hp added) \
        *screams* HELL YAAAHHHH I'M BACK IN THE GAME NOW LOSERS!!" << std::endl;
        this->_hp += amount;
    }
}

/* ----------------------------CHALLENGE--------------------------------- */

void            ScavTrap::challengeNewcomer(std::string const &target) {
    std::cout << "<SC4G-TP> I challenge " << target << " to the \"" << randChallenge[rand() % 8] << "\" challenge! Good luck noob!" << std::endl;
}

/* -------------------------GET STATS---------------------------------- */

std::string     ScavTrap::getName(void) {
    return (this->_name);
}

unsigned int    ScavTrap::getHp(void) {
    return (this->_hp);
}

unsigned int    ScavTrap::getMaxHp(void) {
    return (this->_maxHp);
}

unsigned int    ScavTrap::getEp(void) {
    return (this->_energyPoints);
}

unsigned int    ScavTrap::getMaxEp(void) {
    return (this->_maxEp);
}

unsigned int    ScavTrap::getLevel(void) {
    return (this->_level);
}

unsigned int    ScavTrap::getMeleeDmg(void) {
    return (this->_meleeDmg);
}

unsigned int    ScavTrap::getRangeDmg(void) {
    return (this->_rangedDmg);
}

unsigned int    ScavTrap::getArmor(void) {
    return (this->_armor);
}