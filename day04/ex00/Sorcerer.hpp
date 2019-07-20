#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <iostream>

class Sorcerer {
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(const Sorcerer &cpy);
        ~Sorcerer(void);

        Sorcerer        &operator=(const Sorcerer &r);

        std::string     getName(void) const;
        std::string     getTitle(void) const;

    protected:
        std::string     _name;
        std::string     _title;
    private:
        Sorcerer(void);
};

#endif