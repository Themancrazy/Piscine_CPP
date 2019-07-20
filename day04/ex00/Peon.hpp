#ifndef PEON_HPP
#define PEON_HPP
#include "Victim.hpp"
#include <iostream>

class Peon : public Victim {
    public:
        Peon(std::string name);
        Peon(const Peon &cpy);
        ~Peon(void);

        Peon              &operator=(const Peon &r);

        std::string         getName(void) const;

        virtual void                getPolymorphed(void) const; 

    private:
        Peon(void);
};

#endif