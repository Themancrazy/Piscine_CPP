#include "../inc/AWeapon.hpp"

/*-------------------------------CONST/DEST------------------------------- */

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apCost(apcost), _dmg(damage) {
    return ;
}

AWeapon::AWeapon(const AWeapon &cpy) {
    *this = cpy;
}

AWeapon::~AWeapon(void) {
    return ;
}

/* -------------------------------OPER OVERLOAD = --------------------------- */

AWeapon                 &AWeapon::operator=(const AWeapon &r) {
    this->_name = r._name;
    this->_apCost = r._apCost;
    this->_dmg = r._dmg;
    return *this;
}

/* -------------------------------GET FNCTION ------------------------------- */

std::string             AWeapon::getName(void) const {
    return this->_name;
}

int                     AWeapon::getAPCost(void) const {
    return this->_apCost;
}

int                     AWeapon::getDamage(void) const {
    return this->_dmg;
}