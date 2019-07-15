/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjansse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 08:44:25 by anjansse          #+#    #+#             */
/*   Updated: 2019/06/22 09:25:25 by anjansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static Pony		promptUser(Pony horse)
{
	std::string tmp;
	std::cout << "What's the horse's name ? ";
	getline(std::cin, tmp);
	horse.setName(tmp);
	std::cout << "What's the horse's race ? ";
	getline(std::cin, tmp);
	horse.setRace(tmp);
	std::cout << "What's the horse's color ? ";
	getline(std::cin, tmp);
	horse.setColor(tmp);
	std::cout << "What's the horse's weapon of choice ? ";
	getline(std::cin, tmp);
	horse.setWeapon(tmp);
	std::cout << "What's the horse's level of armor (between 1 - 12) ? ";
	getline(std::cin, tmp);
	horse.setArmor(tmp);
	return (horse);
}

static void		ponyOnTheHeap(void)
{
	Pony	*horse = new Pony();

	*horse = promptUser(*horse);
	std::cout << std::endl;
	std::cout << "Pony " << horse->getName() << " put's on his level " << \
	horse->getArmor() << " armor and prepare it's " << horse->getWeapon() << \
	". Being a " << horse->getColor() << " " << horse->getRace() << \
	" pony, he has to fight for his rights!" << std::endl;
}

static void		ponyOnTheStack(void)
{
	Pony	horse;

	horse = promptUser(horse);
	std::cout << std::endl;
	std::cout << "Pony " << horse.getName() << " put's on his level " << \
	horse.getArmor() << " armor and prepare it's " << horse.getWeapon() << \
	". Being a " << horse.getColor() << " " << horse.getRace() << \
	" pony, he has to fight for his rights!" << std::endl;
}

int				main()
{
	std::cout << "------------HEAP-------------" << std::endl;
	ponyOnTheHeap();
	std::cout << "------------STACK-----------" << std::endl;
	ponyOnTheStack();
	return (0);
}
