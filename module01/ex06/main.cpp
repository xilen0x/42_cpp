/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:42:22 by castorga          #+#    #+#             */
/*   Updated: 2024/09/16 10:42:23 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl	instance;

	if (ac != 2)
	{
		std::cout << "Usage: ./a.out <level>" << std::endl;
		return (1);
	}
	{
		switch (av[1][0])
		{
			case 'd':
				instance.complain("debug");
				break;
			case 'i':
				instance.complain("info");
				break;
			case 'w':
				instance.complain("warning");
				break;
			case 'e':
				instance.complain("error");
				break;
			default:
				std::cout << "Invalid level" << std::endl;
				break;
		}
	}
	return (0);
}


