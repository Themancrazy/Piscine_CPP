#include <iostream>
#include <string>

class Pony {
public:
	Pony(void);
	~Pony(void);
	void		setName(std::string);
	void		setWeapon(std::string);
	void		setArmor(std::string);
	void		setColor(std::string);
	void		setRace(std::string);
	std::string	getArmor(void);
	std::string	getWeapon(void);
	std::string	getName(void);
	std::string	getColor(void);
	std::string	getRace(void);

private:
	std::string	_name;
	std::string	_weapon;
	std::string	_armor;
	std::string	_color;
	std::string	_race;
};
