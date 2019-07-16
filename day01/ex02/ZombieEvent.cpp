#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void){
	return ;
}

ZombieEvent::~ZombieEvent(void){
	return ;
}

void			ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie			*ZombieEvent::newZombie(std::string name)
{
	return new Zombie(name, this->_type);
}

void			ZombieEvent::randomChump(void)
{
	std::string		nameList[10] ={
		"Obama", "Trump", "Hitler", "Pablo Escobar",
		"Elon Musk", "Iron-Man", "Ned Stark", "Dad?",
		"Margot Robbie", "Elton John"
	};

	Zombie max = Zombie(nameList[rand() % 10], this->_type);
	max.annonce();
}
