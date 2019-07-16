#include <iostream>

class Zombie {
	public:
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void			annonce();
		std::string		name;
		std::string		type;
};

