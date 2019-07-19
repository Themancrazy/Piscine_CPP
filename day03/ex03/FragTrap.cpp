#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#define GREEN "\x1b[92m"
#define RESET "\x1b[0m"

/* ------------------------------RANDOM ATTACKS LIST----------------------------*/

std::string     FragTrap::_randAttacks[16] = {
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

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
    std::cout << GREEN"<FR4G-TP> Hey you called me! We better have something important to do cause I was having fun with this cute screwdriver..." RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy)
{
    std::cout << GREEN"<FR4G-TP> Hey you called me! We better have something important to do cause I was having fun with this cute screwdriver..." RESET << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << GREEN"<FR4G-TP> Why am I.. hgrrrghh... dying... hrrggh.. a virgin... AGAIN...<LARGE EXPLOSION>" RESET << std::endl;
}

/* ----------------------------ATTACKS------------------------------------*/

void            FragTrap::vaulthunter_dot_exe(std::string const & target) {
    std::cout << GREEN"<FR4G-TP> You can't just program this level of excitement!" RESET << std::endl;
    if ((this->_energyPoints - 25) <= this->_maxEp) {
        std::cout << GREEN"<FR4G-TP> " << _randAttacks[rand() % 16] << " ";
        std::cout << "attacking " << target << "!" RESET << std::endl;
        this->_energyPoints -= 25;
    }
    else
        std::cout << GREEN "<FR4G-TP> Jez, you can program that level of disappointment i guess.. YOU'RE OUT OF ENERGY!" RESET << std::endl;
}

void            FragTrap::rangedAttack(std::string const &target) {
    std::cout << GREEN << "<FR4G-TP> " << this->_name << " attacked " << target << " from a distance inflicting " << this->_rangedDmg << " dmg" RESET << std::endl;
}

void            FragTrap::meleeAttack(std::string const &target) {
    std::cout << GREEN << "<FR4G-TP> " << this->_name << " attacked " << target << " in close combat inflicting " << this->_meleeDmg << " dmg" RESET << std::endl;
}