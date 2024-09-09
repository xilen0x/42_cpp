/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:36:58 by castorga          #+#    #+#             */
/*   Updated: 2024/09/06 16:37:01 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include <iostream>
# include <cstdlib>

Zombie* zombieHorde( int N, std::string name );

int main()
{
	std::string numZombies;
	int count = 0;

	std::cout << "Enter the number of zombies: ";
	getline(std::cin, numZombies);
	if (std::cin.eof())
		exit(1);
	count = std::atoi(numZombies.c_str());
	if (count < 0)
	{
		std::cout << "Invalid number of zombies!" << std::endl;
		return (1);
	}	
	Zombie *instance = zombieHorde(count, "42 student");
	for (int i = 0; i < count; i++)
	{
		std::cout << "Zombie " << i + 1 << ": ";
		instance[i].announce();
	}
	delete [] instance;
	return(0);
}
