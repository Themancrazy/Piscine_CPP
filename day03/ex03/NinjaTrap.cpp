#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
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

/* -----------------------------------ATTACKS------------------------------------ */

void                NinjaTrap::rangedAttack(std::string const &target) {
    std::cout << "<NI4G-TP> I'm watching you.. Ready to strike from the shadow.. <BOOM> (dealed " << this->_rangedDmg \
    << " dmg to " << target << ")" << std::endl;
}
