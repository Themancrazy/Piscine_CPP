#include <iostream>
#include "Pony.hpp"

int			main()
{
	Pony alpha = Pony("Steven");
	Pony *beta = new Pony("Francesco");

	alpha.jumpObstacle();
	beta->jumpObstacle();
	delete beta;
	return (0);
}
