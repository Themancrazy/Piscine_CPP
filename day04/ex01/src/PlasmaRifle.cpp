#include "../inc/PlasmaRifle.hpp"

/*-------------------------------CONST/DEST------------------------------- */

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {
    return ;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &cpy) : AWeapon(cpy) {
    *this = cpy;
}

PlasmaRifle::~PlasmaRifle(void) {
    return ;
}

/* ------------------------------OPERATOR OVER -------------------------- */

PlasmaRifle         &PlasmaRifle::operator=(const PlasmaRifle &r) {
    AWeapon::operator=(r);
    return *this;
}

/* ------------------------------ATTACK FUNCTION ------------------------ */

void                PlasmaRifle::attack(void) const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}