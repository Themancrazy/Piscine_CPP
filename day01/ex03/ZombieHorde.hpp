#include "Zombie.hpp"

class ZombieHorde {
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);
		void		annonce(void);
	private:
		Zombie		*z;
		int			_n;
};
