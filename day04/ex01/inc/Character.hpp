#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Enemy.hpp"
#include "AWeapon.hpp"

#include <string>

class Character {
    public:
        Character(std::string const & name);
        Character(Character const & rhs);
        virtual ~Character( void );
        void                    recoverAP( void );
        void                    equip(AWeapon*);
        void                    attack(Enemy*);
      
        Character               &operator=(Character const & rhs);

        AWeapon                 *getWeapon( void ) const;
        int                     getAP( void ) const ;
        std::string virtual     getName() const;

    private:
        std::string             _name;
        int                     _AP;
        AWeapon                 *_w;
};

std::ostream &operator << (std::ostream & out, Character const & rhs);


#endif