#include "FragTrap.hpp"

std::string     randomCreatures[15] = {
    "Jack Black", "Johnny Depp", "Barack Obama", "Zorg", "Ancient Dragon of Destruction",
    "Armored Skag", "Arachnee", "Needle Stalker", "Queen Tarantella", "Super-Mutant", "Miner of Death",
    "Scaylion", "Deathclaw", "Smog", "Sauron"
};

int         main() {
    FragTrap jack("Jack");

    srand(time(0));
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