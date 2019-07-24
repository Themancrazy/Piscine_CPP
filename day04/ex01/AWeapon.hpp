#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <iostream>

class AWeapon {
    public:
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(const AWeapon &cpy);
        virtual ~AWeapon(void);

        AWeapon             &operator=(const AWeapon &r);

        std::string virtual getName() const;
        int                 getAPCost() const;
        int                 getDamage() const;

        virtual void        attack() const = 0;

    private:
        std::string _name;
        int                 _apCost;
        int                 _dmg;
};

#endif