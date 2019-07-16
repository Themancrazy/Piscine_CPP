#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void			setZombieType(std::string type);
		Zombie			*newZombie(std::string name);
		void			randomChump(void);
	private:
		std::string		_type;
};
