/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjansse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 13:44:28 by anjansse          #+#    #+#             */
/*   Updated: 2019/07/14 12:01:38 by anjansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static void			outputError(std::string cmd)
{
	std::cout << RED BOLD << cmd << " is not a valid command. Please use one \
	of the following commands: " GREEN "ADD, SEARCH, EXIT" RESET << std::endl;
}
static std::string	truncContact(std::string field)
{
	field = field.erase((WIDTH - 1), field.length() - (WIDTH - 1));
	field.append(".");
	return (field);
}
void				printColumn(std::string *info, int i)
{
	std::string tmp;

	std::cout << "|" BOLD YELLOW << std::setw(WIDTH) << i << RESET;
	tmp = info[0];
	tmp = (tmp.length() > WIDTH) ? truncContact(tmp) : tmp;
	std::cout << "|" BOLD YELLOW << std::setw(WIDTH) << tmp << RESET;
	tmp = info[1];
	tmp = (tmp.length() > WIDTH) ? truncContact(tmp) : tmp;
	std::cout << "|" BOLD YELLOW << std::setw(WIDTH) << tmp << RESET;
	tmp = info[2];
	tmp = (tmp.length() > WIDTH) ? truncContact(tmp) : tmp;
	std::cout << "|" BOLD YELLOW << std::setw(WIDTH) << tmp << RESET;
	std::cout << "|" << std::endl;
}

void				printIndex(std::string *info)
{
	std::cout << "First Name: " CYAN BOLD << info[0] << RESET << std::endl;
	std::cout << "Last Name: " CYAN BOLD << info[1] << RESET << std::endl;
	std::cout << "nickname: " CYAN BOLD << info[2] << RESET << std::endl;
	std::cout << "login: " CYAN BOLD << info[3] << RESET << std::endl;
	std::cout << "Postal address: " CYAN BOLD << info[4] << RESET << std::endl;
	std::cout << "Email address: " CYAN BOLD << info[5] << RESET << std::endl;
	std::cout << "Phone number: " CYAN BOLD << info[6] << RESET << std::endl;
	std::cout << "Birthday date: " CYAN BOLD << info[7] << RESET << std::endl;
	std::cout << "Favourite meal: " CYAN BOLD << info[8] << RESET << std::endl;
	std::cout << "Underwear color: " CYAN BOLD << info[9] << RESET << std::endl;
	std::cout << "Darkest secret: " CYAN BOLD << info[10] << RESET << std::endl;
}

std::string			promptUserCmd(void)
{
	if (std::cin.eof())
		exit(0);
	std::string		command;
	std::cout << "Input command: " BOLD MAGENTA;
	getline(std::cin, command);
	std::cout << RESET;
	return (command);
}

int				main(void)
{
	int				i;
	Command			cmd;
	std::string		tmp;
	std::string		command;
	std::string		info[MAX_INDEX][10];
	i = -1;
	while (!std::cin.eof())
	{
		command = promptUserCmd();
		while (command != "ADD" && command != "SEARCH" && command != "EXIT")
		{
			outputError(command);
			command = promptUserCmd();
		}
		if (command == "ADD" && i == MAX_INDEX - 1)
		{
			std::cout << RED BOLD "Max number of contacts already created (8).\
			" RESET << std::endl;
		}
		else if (command == "EXIT")
			exit(0);
		else if (command == "ADD")
			cmd.addFunction(info[++i]);
		else if (command == "SEARCH")
			cmd.searchFunction(info, i);
	}
	return (0);
}
