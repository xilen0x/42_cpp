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
# include <algorithm>//transform

int main(int ac, char **av)
{
	Harl	instance;

	if (ac != 2)
	{
		std::cout << "Usage: ./a.out <level>" << std::endl;
		return (1);
	}
	instance.complain(av[1]);
	return (0);
}


