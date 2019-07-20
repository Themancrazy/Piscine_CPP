#include "Peon.hpp"
#include "Victim.hpp"

/*-------------------------------CONST/DEST--------------------------------- */

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog Zog." << std::endl;
}
Peon::Peon(const Peon &cpy) : Victim(cpy) {
    std::cout << "Zog Zog." << std::endl;
    *this = cpy;
}

Peon::~Peon(void) {
    std::cout << "Bleuark..." << std::endl;
}

/*-------------------------------OVERLOAD OP = --------------------------------- */

Peon              &Peon::operator=(const Peon &r) {
    this->_name = r._name;
    return *this;
}

/*-------------------------------GET NAME --------------------------------- */

std::string         Peon::getName(void) const {
    return this->_name;
}

/*------------------------------- QUEST FUNCTIONS--------------------------------- */

void                Peon::getPolymorphed(void) const {
    std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
} 