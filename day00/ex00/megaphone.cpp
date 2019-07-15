/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjansse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 12:04:16 by anjansse          #+#    #+#             */
/*   Updated: 2019/06/20 13:27:23 by anjansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int				main(int ac, char **av)
{
	int		i;

	if (ac > 1)
	{
		av++;
		while (*av)
		{
			i = 0;
			while ((*av)[i])
			{
				std::cout << (char)std::toupper((*av)[i]);
				i++;
			}
			av++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
