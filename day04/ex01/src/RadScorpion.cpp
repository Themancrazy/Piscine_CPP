#include "../inc/RadScorpion.hpp"

/*-------------------------------CONST/DEST------------------------------- */

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &cpy) : Enemy(cpy){
    *this = cpy;
}

RadScorpion::~RadScorpion(void) {
    std::cout << "* SPROTCH *" << std::endl;
}

/* -------------------------------OPER OVERLOAD = --------------------------- */

RadScorpion             &RadScorpion::operator=(const RadScorpion &r) {
    Enemy::operator=(r);
    return *this;
}