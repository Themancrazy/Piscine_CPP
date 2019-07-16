#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	std::cout << "A zombie has raised up from the deads." << std::endl;
	this->name = name;
	this->type = type;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " got oblitirated!" << std::endl;
}

void		Zombie::annonce(void)
{
	std::cout << "<" << this->name << " " << this->type << ">";
	std::cout << " Braaaaiiiiinnnnnnnn..." << std::endl;
}
