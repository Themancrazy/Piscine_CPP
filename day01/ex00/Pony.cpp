/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjansse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 09:03:04 by anjansse          #+#    #+#             */
/*   Updated: 2019/06/22 09:19:13 by anjansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
	return ;
}

Pony::~Pony(void)
{
	return ;
}

void			Pony::setName(std::string name)
{
	this->_name = name;
	return ;
}

void			Pony::setWeapon(std::string weapon)
{
	this->_weapon = weapon;
	return ;
}

void			Pony::setArmor(std::string armor)
{
	this->_armor = armor;
	return ;
}

void			Pony::setColor(std::string color)
{
	this->_color = color;
	return ;
}

void			Pony::setRace(std::string race)
{
	this->_race = race;
	return ;
}

std::string		Pony::getArmor(void)
{
	return (this->_armor);
}

std::string		Pony::getName(void)
{
	return (this->_name);
}

std::string		Pony::getRace(void)
{
	return (this->_race);
}

std::string		Pony::getColor(void)
{
	return (this->_color);
}

std::string		Pony::getWeapon(void)
{
	return (this->_weapon);
}
