#include "FragTrap.hpp"

/* ------------------------------RANDOM ATTACKS LIST----------------------------*/

std::string     randAttacks[16] = {
    "Step right up, to the Bulletnator 9000!",
    "I am a tornado of death and bullets!",
    "Stop me before I kill again, except don't!",
    "There is no way this ends badly!",
    "This is why I was built!",
    "Wow, did I really do that?",
    "Don't tell me that wasn't awesome!",
    "Freeze! I don't know why I said that.",
    "That looks like it hurts!",
    "Is that what people look like inside?",
    "It's happening... it's happening!",
    "This time it'll be awesome, I promise!",
    "I have an IDEA!",
    "Let's get this party started!",
    "Recompiling my combat code!",
    "It's about to get magical!"
};

/* ----------------------------CONSTRUCTOR/DESTR------------------------------------*/

FragTrap::FragTrap(std::string name) :
    _name(name), _hp(100), _maxHp(100), _energyPoints(100),_maxEp(100), _level(1),
    _meleeDmg(30), _rangedDmg(20), _armor(5) 
{
        std::cout << "<FR4G-TP> Hey you called me! We better have something important to do cause I was having fun with this cute screwdriver..." << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy) :
    _name(cpy._name), _hp(cpy._hp), _maxHp(cpy._maxHp), _energyPoints(cpy._energyPoints), _maxEp(cpy._maxEp), _level(cpy._level),
    _meleeDmg(cpy._meleeDmg), _rangedDmg(cpy._rangedDmg), _armor(cpy._armor) 
{
        std::cout << "<FR4G-TP> Hey you called me! We better have something important to do cause I was having fun with this cute screwdriver..." << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << "<FR4G-TP> Why am I.. hgrrrghh... dying... hrrggh.. a virgin... AGAIN...<LARGE EXPLOSION>" << std::endl;
}

/* ----------------------------ATTACKS------------------------------------*/

void            FragTrap::vaulthunter_dot_exe(std::string const & target) {
    std::cout << "<FR4G-TP> You can't just program this level of excitement!" << std::endl;
    if ((this->_energyPoints - 25) <= this->_maxEp) {
        std::cout << "<FR4G-TP> " << randAttacks[rand() % 16] << " ";
        std::cout << "attacking " << target << "!" << std::endl;
        this->_energyPoints -= 25;
    }
    else
        std::cout << "<FR4G-TP> Jez, you can program that level of disappointment i guess.. YOU'RE OUT OF ENERGY!" << std::endl;
}

void            FragTrap::rangedAttack(std::string const &target) {
    std::cout << this->_name << " attacked " << target << " from a distance inflicting " << this->_rangedDmg << " dmg"<< std::endl;
}

void            FragTrap::meleeAttack(std::string const &target) {
    std::cout << this->_name << " attacked " << target << " in close combat inflicting " << this->_meleeDmg << " dmg"<< std::endl;
}

/* ----------------------------DEFENSE-------------------------------------*/

void            FragTrap::takeDamage(unsigned int amount) {
    std::cout << "<FR4G-TP> I'm.. INVINCIB- ARGH, please don't hurt me!!" << std::endl;
    if ((this->_hp - (amount - this->_armor)) <= this->_maxHp) {
        std::cout << "<FR4G-TP> hrrggr.. We're taking damage " << this->_name << " (" << amount - this->_armor <<\
        " dmg)! Do something, I'm busy with the screwdriver!" << std::endl;
        this->_hp -= (amount - this->_armor);
    }
    else
        this->_hp = 0;
}

void            FragTrap::beRepaired(unsigned int amount) {
    std::cout << "<FR4G-TP> Huhuhu, I'm here to stay motherfuckers!! I've found some sweeeet life juice hehehe.." << std::endl;
    if ((this->_hp + amount) >= this->_maxHp) {
        std::cout << "<FR4G-TP> There you go.. (" << this->_maxHp - this->_hp << " hp added)\
        *screams* HELL YAAAHHHH I'M BACK IN THE GAME NOW LOSERS!!" << std::endl;
        this->_hp = this->_maxHp;
    }
    else if ((this->_hp + amount) < this->_maxHp) {
        std::cout << "<FR4G-TP> There you go.. (" << amount << " hp added) \
        *screams* HELL YAAAHHHH I'M BACK IN THE GAME NOW LOSERS!!" << std::endl;
        this->_hp += amount;
    }
}