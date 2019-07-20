#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &cpy) {
    *this = cpy;
}

Sorcerer        &Sorcerer::operator=(const Sorcerer &r);
    this->_name = r.getName();
    this->_title = r.getTitle();
    return *this;
}

std::string       Sorcerer::getName(void) const {
    return this->_name;
}

std::string       Sorcerer::getTitle(void) const {
    return this->_title;
}