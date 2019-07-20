#ifndef SORCERER_HPP
#define SORCERER_HPP
#include "Victim.hpp"
#include <iostream>
#include <fstream>

class Sorcerer {
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(const Sorcerer &cpy);
        ~Sorcerer(void);

        Sorcerer        &operator=(const Sorcerer &r);

        std::string     getName(void) const;
        std::string     getTitle(void) const;

        void            polymorph(Victim const &target) const;

    protected:
        std::string     _name;
        std::string     _title;

    private:
        Sorcerer(void);
};

std::ostream    &operator<<(std::ostream &out, Sorcerer const &r);

#endif