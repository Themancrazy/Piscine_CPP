#include <ctime>
#include <cstdlib>
#include "ZombieHorde.hpp"

std::string		nameList[10] {
	"Obama", "Trump", "Hitler", "Pablo Escobar",
	"Elon Musk", "Iron-Man", "Ned Stark", "Dad?",
	"Margot Robbie", "Elton John"
};

ZombieHorde::ZombieHorde(int N) : _n(n) {
	this->_zmb = new Zombie(this->_n);
	for (int i;i < N;i++){
		srand(time(0));
		this->_zmb[i].setName(nameList[rand() % 10]);
	}
}

ZombieHorde::~ZombieHorde(void) {
	delete []this->_zmb;
}

void		ZombieHorde::announce( void ) {
	for (int i = 0; i < this->_n; i++)
		this->_zmb->announce();
}
