#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
    std::cout << "<NI4G-TP> Like a ninja.. I arrive and I'm ready to be as silent as a c--.. * breaks a glass *" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &cpy) : ClapTrap(cpy)
{
    std::cout << "<NI4G-TP> Like a ninja.. I arrive and I'm ready to be as silent as a c--.. * breaks a glass *" << std::endl;
}

NinjaTrap::~NinjaTrap(void) {
    std::cout << "<NI4G-TP> I arrived silently.. I'll leave sil-- <NUCLEAR EXPLOSION CHANGING THE FACE OF THE EARTH FOREVER>" << std::endl;
}

/*-----------------------------OVERLOADING ---------------------------------------- */

NinjaTrap        &NinjaTrap::operator=(const NinjaTrap &r) {
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

/* -----------------------------------ATTACKS------------------------------------ */

void                NinjaTrap::rangedAttack(std::string const &target) {
    std::cout << "<NI4G-TP> I'm watching you.. Ready to strike from the shadow.. <BOOM> (dealed " << this->_rangedDmg \
    << " dmg to " << target << ")" << std::endl;
}

void                NinjaTrap::meleeAttack(std::string const &target) {
    std::cout << "<NI4G-TP> Eat my external hammer in YOUR FACE stupid " << target << \
    "(dealed " << this->_meleeDmg << " dmg)" << std::endl;
}

/* ---------------------------------NINJA ATTACKS ---------------------------------*/

void                NinjaTrap::ninjaShoebox(FragTrap &target) {
    std::cout << "<NI4G-TP> I activate my special power! Reveal your name !! *BZZZ* \"" << target.getName() << "\"! Interesting..." << std::endl;
}

void                NinjaTrap::ninjaShoebox(ScavTrap &target) {
    std::cout << "<NI4G-TP> I activate my special power! Reveal your name !! *BZZZ* \"" << target.getName() << "\"! Interesting..." << std::endl;
}

void                NinjaTrap::ninjaShoebox(ClapTrap &target) {
    std::cout << "<NI4G-TP> I activate my special power! Reveal your name !! *BZZZ* \"" << target.getName() << "\"! Interesting..." << std::endl;
}

void                NinjaTrap::ninjaShoebox(NinjaTrap &target) {
    std::cout << "<NI4G-TP> I activate my special power! Reveal your name !! *BZZZ* \"" << target.getName() << "\"! Interesting..." << std::endl;
}
