#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#define RED "\x1b[91m"
#define BOLD "\x1b[1m"
#define PURPLE "\x1b[94m"
#define YELLOW "\x1b[93m"
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
    std::cout << PURPLE BOLD"<SC4G-TP> Health status: " << scav.getName() << " has " << scav.getHp() << "hp!" RESET <<std::endl;
    scav.takeDamage(120);
    std::cout << PURPLE BOLD"<SC4G-TP> Health status: " << scav.getName() << " has " << scav.getHp() << "hp!" RESET <<std::endl;
    scav.beRepaired(80);
    std::cout << PURPLE BOLD"<SC4G-TP> Health status: " << scav.getName() << " has " << scav.getHp() << "hp!" RESET <<std::endl;
    scav.challengeNewcomer(creature);
}

void        testNinja(void) {
    NinjaTrap ninja("Francis");
    FragTrap test("This is my test name");

    std::string creature = randomCreatures[rand() % 15];
    ninja.rangedAttack(creature);
    ninja.meleeAttack(creature);
    ninja.takeDamage(35);
    ninja.takeDamage(35);
    std::cout << YELLOW BOLD"<NI4G-TP> Health status: " << ninja.getName() << " has " << ninja.getHp() << "hp!" RESET <<std::endl;
    ninja.takeDamage(120);
    std::cout << YELLOW BOLD"<NI4G-TP> Health status: " << ninja.getName() << " has " << ninja.getHp() << "hp!" RESET <<std::endl;
    ninja.beRepaired(80);
    std::cout << YELLOW BOLD"<NI4G-TP> Health status: " << ninja.getName() << " has " << ninja.getHp() << "hp!" RESET <<std::endl;
    ninja.ninjaShoebox(test);
}

int         main() {
    srand(time(0));
    testFrag();

    std::cout << "\n-----------------------\n" << std::endl;

    testScav();
    std::cout << "\n-----------------------\n" << std::endl;

    testNinja();
}