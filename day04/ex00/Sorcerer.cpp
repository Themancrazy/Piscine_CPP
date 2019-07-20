#include "Sorcerer.hpp"

/*-------------------------------CONST/DEST--------------------------------- */

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &cpy) {
    *this = cpy;
}

Sorcerer::~Sorcerer(void) {
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

/*-------------------------------OVERLOAD OP = --------------------------------- */

Sorcerer        &Sorcerer::operator=(const Sorcerer &r) {
    this->_name = r.getName();
    this->_title = r.getTitle();
    return *this;
}

/*-------------------------------GET NAME/TITLE --------------------------------- */

std::string       Sorcerer::getName(void) const {
    return this->_name;
}

std::string       Sorcerer::getTitle(void) const {
    return this->_title;
}

/*------------------------------- QUEST FUNCTIONS--------------------------------- */

void              Sorcerer::polymorph(Victim const &target) const {
    target.getPolymorphed();
}

/*-------------------------------OUTPUT STREAM FNCT --------------------------------- */

std::ostream      &operator<<(std::ostream &out, const Sorcerer &r) {
    out << "I am " << r.getName() << ", " << r.getTitle() << ", and I like ponies !" << std::endl;
    return out;
}