#include "ScavTrap.hpp"
#define RED "\x1b[91m"
#define RESET "\x1b[0m"

/* ------------------------------RANDOM ATTACKS LIST----------------------------*/

std::string     ScavTrap::randChallenge[8] = {
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

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
    std::cout << RED"<SC4G-TP> Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy)
{
    std::cout << RED"<SC4G-TP> Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" RESET << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << RED"<SC4G-TP> I'll stop talking when I'm dead!! ... Fuc-- <VERY LARGE EXPLOSION>" RESET << std::endl;
}

/* ----------------------------ATTACKS------------------------------------*/

void            ScavTrap::rangedAttack(std::string const &target) {
    std::cout << RED"<SC4G-TP> " << this->_name << ", attacking from a distance is a bitch move but you inflicted " <<\
    this->_rangedDmg << " dmg to " << target << RESET << std::endl;
}

void            ScavTrap::meleeAttack(std::string const &target) {
    std::cout << RED"<SC4G-TP> " << this->_name << " C'MON HIT IT, HIT IIITTTT (" <<\
    this->_rangedDmg << " dmg inflicted to " << target << ")" RESET << std::endl;
}

/* ----------------------------CHALLENGE--------------------------------- */

void            ScavTrap::challengeNewcomer(std::string const &target) {
    std::cout << RED"<SC4G-TP> I challenge " << target << " to the \"" << randChallenge[rand() % 8] << "\" challenge! Good luck noob!" RESET << std::endl;
}