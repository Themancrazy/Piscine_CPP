#include "ZombieEvent.hpp"

int			main(void)
{
	ZombieEvent pool = ZombieEvent();

	pool.setZombieType("Dead");
	pool.randomChump();
	pool.randomChump();
	pool.randomChump();
	pool.randomChump();
	Zombie *zombie_0 = pool.newZombie("Maxence");
	zombie_0->annonce();
	delete zombie_0;
	return (0);
}
