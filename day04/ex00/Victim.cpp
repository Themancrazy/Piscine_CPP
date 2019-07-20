#include "Victim.hpp"

/*-------------------------------CONST/DEST--------------------------------- */

Victim::Victim(std::string name) : _name(name)
{
    std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}
Victim::Victim(const Victim &cpy) {
    *this = cpy;
    std::cout << "Some random victim called " << cpy._name << " just popped !" << std::endl;
}

Victim::~Victim(void) {
    std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

/*-------------------------------OVERLOAD OP = --------------------------------- */

Victim              &Victim::operator=(const Victim &r) {
    this->_name = r._name;
    return *this;
}

/*-------------------------------GET NAME --------------------------------- */

std::string         Victim::getName(void) const {
    return this->_name;
}

/*------------------------------- QUEST FUNCTIONS--------------------------------- */

void                Victim::getPolymorphed(void) const {
    std::cout << this->_name << "  has been turned into a cute little sheep !" << std::endl;
} 

/*-------------------------------OUTPUT STREAM FNCT --------------------------------- */

std::ostream      &operator<<(std::ostream &out, const Victim &r) {
    out << "I'm " << r.getName() << " and I like otters !" << std::endl;
    return out;
}