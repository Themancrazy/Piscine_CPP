#ifndef SQUAD_HPP
#define SQUAD_HPP
#include "ISquad.hpp"

class Squad : virtual public ISquad {
    public:
        Squad(void);
        Squad(const Squad &cpy);
        ~Squad(void);

        Squad               &operator=(const Squad &r);

        int                 getCount(void);
        ISpaceMarine        *getUnit(int);
        int                 push(ISpaceMarine *);

    private:
        int                 _unit;
};

#endif
