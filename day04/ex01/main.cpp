#include "../inc/Character.hpp"
#include "../inc/Enemy.hpp"
#include "../inc/RadScorpion.hpp"
#include "../inc/PlasmaRifle.hpp"
#include "../inc/PowerFist.hpp"
#include <iostream>

int main() {
    Character* zaz = new Character("zaz");
    std::cout << *zaz;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
return 0;
}