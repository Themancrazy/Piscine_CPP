#include "ScavTrap.hpp"
#include "FragTrap.hpp"

std::string     randomCreatures[15] = {
    "Jack Black", "Johnny Depp", "Barack Obama", "Zorg", "Ancient Dragon of Destruction",
    "Armored Skag", "Arachnee", "Needle Stalker", "Queen Tarantella", "Super-Mutant", "Miner of Death",
    "Scaylion", "Deathclaw", "Smog", "Sauron"
};

void        testFrag(FragTrap &jack) {
    std::string creature = randomCreatures[rand() % 15];
    jack.rangedAttack(creature);
    jack.meleeAttack(creature);
    jack.takeDamage(35);
    jack.takeDamage(35);
    jack.takeDamage(35);
    jack.takeDamage(120);
    jack.takeDamage(35);
    jack.beRepaired(80);
    jack.vaulthunter_dot_exe(creature);
}

void        testScav(ScavTrap &scav) {
    std::string creature = randomCreatures[rand() % 15];
    scav.rangedAttack(creature);
    scav.meleeAttack(creature);
    scav.takeDamage(35);
    scav.takeDamage(35);
    scav.takeDamage(35);
    scav.takeDamage(120);
    scav.takeDamage(35);
    scav.beRepaired(80);
    scav.challengeNewcomer(creature);
}

int         main() {
    FragTrap jack("Jack");
    ScavTrap scav("Bob");

    srand(time(0));
    testFrag(jack);

    std::cout << "\n-----------------------\n" << std::endl;

    testScav(scav);
}