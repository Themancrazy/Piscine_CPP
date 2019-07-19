#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

std::string     randomCreatures[15] = {
    "Jack Black", "Johnny Depp", "Barack Obama", "Zorg", "Ancient Dragon of Destruction",
    "Armored Skag", "Arachnee", "Needle Stalker", "Queen Tarantella", "Super-Mutant", "Miner of Death",
    "Scaylion", "Deathclaw", "Smog", "Sauron"
};

void        testFrag(std::string name) {
    FragTrap frag(name);
    std::string creature = randomCreatures[rand() % 15];

    frag.meleeAttack(creature);
    frag.rangedAttack(creature);
    for (int i = 0;i < 6;i++) {
        frag.takeDamage(20);
    }
    frag.beRepaired(60);
    frag.vaulthunter_dot_exe(creature);
}

void        testScav(std::string name) {
    ScavTrap clap(name);
    std::string creature = randomCreatures[rand() % 15];

    clap.meleeAttack(creature);
    clap.rangedAttack(creature);
    for (int i = 0;i < 6;i++) {
        clap.takeDamage(20);
    }
    clap.beRepaired(60);
    clap.challengeNewcomer(creature);
}

int         main() {
    srand(time(0));
    //testScav("ScavTrap");
    testFrag("FragTrap");
    return (0);
}