#include "Squad.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

/* -----------------CONSTR/DESTR------------------*/

Squad::Squad(void) {
    return ;
}

Squad::Squad(const Squad &cpy) {
    *this = cpy;
}

Squad::~Squad(void) {
    return ;
}

/* ------------------OP OVERLOAD------------------ */

Squad               &Squad::operator=(const Squad &r) {
    this->_unit = r._unit;
    return *this;
}

/* -------------------GET FNCTION ---------------- */

int                 Squad::getCount(void) {
    return this->_unit;
}

ISpaceMarine        *Squad::getUnit(int n) {
    ISpaceMarine *test;

    for (int i = 0; i < n;i++) {
        test++;
    }
    return test;
}

int                  Squad::push(ISpaceMarines *unit) {
    
}
