#include "../inc/SuperMutant.hpp"

/*-------------------------------CONST/DEST------------------------------- */

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &cpy) : Enemy(cpy){
    *this = cpy;
}

SuperMutant::~SuperMutant(void) {
    std::cout << "Aaargh ..." << std::endl;
}

/* -------------------------------OPER OVERLOAD = --------------------------- */

SuperMutant             &SuperMutant::operator=(const SuperMutant &r) {
    Enemy::operator=(r);
    return *this;
}

/* -------------------------------GET FNCTION ------------------------------- */

void                    SuperMutant::takeDamage(int dmg) {
    int totDmg = 3 - dmg;
    if (dmg < 0) {
        this->setHP(this->getHP() - totDmg);
    }
    else if (dmg >= 0 && (this->getHP() - totDmg) >= 0) {
        return ;
    }
    else {
        this->setHP(0);
    }
}              