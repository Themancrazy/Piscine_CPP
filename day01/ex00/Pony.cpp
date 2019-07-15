#include "Pony.hpp"

Pony::Pony(std::string test) : _name(test)
{
	std::cout << "A pony named " << this->_name << " is born." << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "The pony named " << this->_name << " died." << std::endl;
}

void	Pony::jumpObstacle(void)
{
	std::cout << this->_name << " jumped an obstacle, hurra to him !!" << std::endl;
}
