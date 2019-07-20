#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>

class Victim {
    public:
        Victim(std::string name);
        Victim(const Victim &cpy);
        ~Victim(void);

        Victim              &operator=(const Victim &r);

        std::string         getName(void) const;

        virtual void                getPolymorphed(void) const; 

    protected:
        std::string         _name;

    private:
        Victim(void);
};

std::ostream    &operator<<(std::ostream &out, Victim const &r);

#endif