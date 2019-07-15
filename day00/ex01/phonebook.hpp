#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <cstdlib>
# include <iostream>
# include <iomanip>

# define RESET "\x1b[0m"
# define BOLD "\x1b[1m"
# define UNDERLINE "\x1b[4m"
# define BARRE "\x1b[4m"
# define RED "\x1b[31m"
# define GREEN "\x1b[32m"
# define YELLOW "\x1b[33m"
# define BLUE "\x1b[34m"
# define MAGENTA "\x1b[35m"
# define CYAN "\x1b[36m"

# define WIDTH 10
# define MAX_INDEX 8

void			printColumn(std::string *info, int i);
void			printIndex(std::string *info);
std::string		promptUserCmd(void);

class Command {
public:
	std::string		*addFunction(std::string info[10]){
		std::cout << "First Name: " YELLOW BOLD;
		getline(std::cin, info[0]);
		std::cout << RESET "Last Name: " YELLOW BOLD;
		getline(std::cin, info[1]);
		std::cout << RESET "nickname: " YELLOW BOLD;
		getline(std::cin, info[2]);
		std::cout << RESET "login: " YELLOW BOLD;
		getline(std::cin, info[3]);
		std::cout << RESET "Postal address: " YELLOW BOLD;
		getline(std::cin, info[4]);
		std::cout << RESET "Email address: " YELLOW BOLD;
		getline(std::cin, info[5]);
		std::cout << RESET "Phone number: " YELLOW BOLD;
		getline(std::cin, info[6]);
		std::cout << RESET "Birthday date: " YELLOW BOLD;
		getline(std::cin, info[7]);
		std::cout << RESET "Favourite meal: " YELLOW BOLD;
		getline(std::cin, info[8]);
		std::cout << RESET "Underwear color: " YELLOW BOLD;
		getline(std::cin, info[9]);
		std::cout << RESET "Darkest secret: " YELLOW BOLD;
		getline(std::cin, info[10]);
		std::cout << RESET;
		return (info);
	}
	int		searchFunction(std::string info[8][10], int i){
		int				j;
		std::locale		loc;
		std::string		tmp;
		j = 0;
		if (i == -1)
		{
			std::cout << RED BOLD "No contact added yet." RESET << std::endl;
			return (0);
		}
		std::cout << std::setw(WIDTH);
		std::cout << "|     " UNDERLINE "Index" RESET "|" UNDERLINE \
		"First Name" RESET "|" UNDERLINE " Last Name" RESET "|" UNDERLINE \
		"  Nickname" RESET "|" << std::endl;
		while (j <= i)
		{
			printColumn(info[j], j);
			j++;
		}
		std::cout << "Whose informations would you like to display (index)? ";
		getline(std::cin, tmp);
		for (std::string::iterator it=tmp.begin(); it!=tmp.end(); ++it)
		{
			if (std::isalpha(*it, loc))
			{
				std::cout << RED BOLD "Incorrect index" RESET << std::endl;
				return (0);
			}
		}
		j = std::stoi(tmp);
		if (j < 0 || j > i)
		{
			std::cout << RED BOLD "Incorrect index" RESET << std::endl;
			return (0);
		}
		printIndex(info[j]);
		return (1);
	}
};

#endif
