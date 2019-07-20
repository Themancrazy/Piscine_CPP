#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>

class Enemy {
    public:
        Enemy(int hp, std::string const & type);
        Enemy(const Enemy &cpy);
        virtual ~Enemy(void);

        Enemy                       &operator=(const Enemy &r);

        std::string virtual         getType(void) const;
        int                         getHP(void) const;
        void                        setHP(int hp);

        virtual void                takeDamage(int);

    private:
        int                         _hp;
        std::string                 _type;
};

#endif