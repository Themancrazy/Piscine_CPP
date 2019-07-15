#include <iostream>

class Pony {
	public:
		Pony(std::string);
		~Pony(void);
		void			jumpObstacle(void);
	private:
		std::string		_name;
};
