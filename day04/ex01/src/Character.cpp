#include "../inc/Character.hpp"
#include "../inc/Enemy.hpp"
#include <iostream>

/*-------------------------------CONST/DEST------------------------------- */

Character::Character( std::string const & name ) : _name(name), _AP(40), _w(NULL) {
    return ;
}

Character::~Character( void ) {
    return ;
}

Character::Character( Character const & rhs) {
    *this = rhs;
    return ;
}

/* -------------------------------OPER OVERLOAD = --------------------------- */

Character & Character::operator=(Character const & rhs) {
    this->_w = rhs.getWeapon();
    this->_AP = rhs.getAP();
    this->_name = rhs.getName();
    return (*this);
}

/* -------------------------------QUEST FUNCTION --------------------------- */

void        Character::recoverAP( void ) {
    if (this->_AP + 10 > 40) {
        this->_AP = 40;
    } else { 
        this->_AP += 10;
    }
}

void        Character::attack(Enemy *e) {
    if (!e->getHP())
        return ;
    if (this->_w == NULL || this->_AP - this->_w->getAPCost() < 0) {
        return ;
    }
    std::cout << this->_name << " attacks " << e->getType() << " with a " << this->_w->getName() << std::endl;
        this->_w->attack();
    e->takeDamage(this->_w->getDamage());    
    this->_AP -= this->_w->getAPCost();
    if (e->getHP() <= 0) {
        delete e;
    }
}

void        Character::equip(AWeapon *w) {
    this->_w = w;
}

std::string Character::getName( void ) const {
    return this->_name;
}

int         Character::getAP( void ) const {
    return this->_AP;
}

AWeapon     *Character::getWeapon( void ) const {
    return this->_w;
}

/* -----------------------------------OUTPUT FNCTION ------------------------------- */

std::ostream &operator << (std::ostream & out, Character const & rhs) {
    if (rhs.getWeapon() != NULL) {
        out << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
    } else {
        out << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
    }
    return out;
}