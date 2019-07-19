#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap(std::string name) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5), NinjaTrap(name), FragTrap(name) {
    std::cout << "<SP4G-TP> *Dark Vador's voice* You got yourself an end-game boss.. Like Thanos.. Or.. "\
     << "Ant-Man.. I don't remember to be honest.. BUT IT DOESN'T MATTER, YOU WILL DIE!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &cpy) : FragTrap(cpy), NinjaTrap(cpy) {
    std::cout << "<SP4G-TP> *Dark Vador's voice* You got yourself an end-game boss.. Like Thanos.. Or.. "\
     << "Ant-Man.. I don't remember to be honest.. BUT IT DOESN'T MATTER, YOU WILL DIE!" << std::endl;
}

SuperTrap::~SuperTrap(void) {
    std::cout << "<SP4G-TP> I can't die, I'm too strong to be def-- **Hulk appears out of nowhere and smashes the robot** Hulk:" <<\
    "\"HULK SMASH, HULK HEARD THE NAME THANOS, WHERE THANOS ?????\"!" << std::endl;
}

void        SuperTrap::rangedAttack(const std::string &target) {
    std::cout << "<SP4G-TP> This is too easy, I'm just rolling over you'all"
}