#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#define RED "\x1b[91m"
#define BOLD "\x1b[1m"
#define PURPLE "\x1b[94m"
#define RESET "\x1b[0m"

std::string     randomCreatures[15] = {
    "Jack Black", "Johnny Depp", "Barack Obama", "Zorg", "Ancient Dragon of Destruction",
    "Armored Skag", "Arachnee", "Needle Stalker", "Queen Tarantella", "Super-Mutant", "Miner of Death",
    "Scaylion", "Deathclaw", "Smog", "Sauron"
};

void        testFrag(void) {
    FragTrap jack("Jack");

    std::string creature = randomCreatures[rand() % 15];
    jack.rangedAttack(creature);
    jack.meleeAttack(creature);
    jack.takeDamage(35);
    jack.takeDamage(35);
    std::cout << RED BOLD"<FR4G-TP> Health status: " << jack.getName() << " has " << jack.getHp() << "hp!" RESET <<std::endl;
    jack.takeDamage(120);
    std::cout << RED BOLD"<FR4G-TP> Health status: " << jack.getName() << " has " << jack.getHp() << "hp!" RESET <<std::endl;
    jack.beRepaired(80);
    std::cout << RED BOLD"<FR4G-TP> Health status: " << jack.getName() << " has " << jack.getHp() << "hp!" RESET <<std::endl;
    jack.vaulthunter_dot_exe(creature);
}

void        testScav(void) {
    ScavTrap scav("Bob");

    std::string creature = randomCreatures[rand() % 15];
    scav.rangedAttack(creature);
    scav.meleeAttack(creature);
    scav.takeDamage(35);
    scav.takeDamage(35);
    std::cout << PURPLE BOLD"<FR4G-TP> Health status: " << scav.getName() << " has " << scav.getHp() << "hp!" RESET <<std::endl;
    scav.takeDamage(120);
    std::cout << PURPLE BOLD"<FR4G-TP> Health status: " << scav.getName() << " has " << scav.getHp() << "hp!" RESET <<std::endl;
    scav.beRepaired(80);
    std::cout << PURPLE BOLD"<FR4G-TP> Health status: " << scav.getName() << " has " << scav.getHp() << "hp!" RESET <<std::endl;
    scav.challengeNewcomer(creature);
}

int         main() {
    srand(time(0));
    testFrag();

    std::cout << "\n-----------------------\n" << std::endl;

    testScav();
}