#include "../inc/Enemy.hpp"

/*-------------------------------CONST/DEST------------------------------- */

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type) {
    return ;
}

Enemy::Enemy(const Enemy &cpy) {
    *this = cpy;
}

Enemy::~Enemy(void) {
    return ;
}

/* -------------------------------OPER OVERLOAD = --------------------------- */

Enemy                 &Enemy::operator=(const Enemy &r) {
    this->_type = r._type;
    this->_hp = r._hp;
    return *this;
}

/* -------------------------------GET/SET FNCTION ------------------------------- */

std::string             Enemy::getType(void) const {
    return this->_type;
}

int                     Enemy::getHP(void) const {
    return this->_hp;
}

void                    Enemy::setHP(int hp) {
    this->_hp = hp;
}

/* ------------------------------TAKE DMG --------------------------------------- */

void                    Enemy::takeDamage(int dmg) {
    if (this->_hp  -  dmg < 0) {
        this->_hp = 0;
    } else {
        this->_hp -= dmg;
    }
}