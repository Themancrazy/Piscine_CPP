#include "../inc/PowerFist.hpp"

/*-------------------------------CONST/DEST------------------------------- */

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {
    return ;
}

PowerFist::PowerFist(const PowerFist &cpy) : AWeapon(cpy) {
    *this = cpy;
}

PowerFist::~PowerFist(void) {
    return ;
}

/* ------------------------------OPERATOR OVER -------------------------- */

PowerFist         &PowerFist::operator=(const PowerFist &r) {
    AWeapon::operator=(r);
    return *this;
}

/* ------------------------------ATTACK FUNCTION ------------------------ */

void                PowerFist::attack(void) const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}