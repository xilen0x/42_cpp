/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:15:53 by castorga          #+#    #+#             */
/*   Updated: 2024/09/24 11:15:54 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	int count = 10;
	AAnimal* myZoo[count];

	for (int i = 0; i < count; i++)
	{
		if (i % 2 == 0)
			myZoo[i] = new Dog();
		else
			myZoo[i] = new Cat();
	}
	for (int i = 0; i < count; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << YELLOW << "The dog says: " << RESET;
			myZoo[i]->makeSound();
		}
		else
		{
			std::cout << GREEN << "The cat says: " << RESET;
			myZoo[i]->makeSound();
		}
	}
	for (int i = 0; i < count; i++)
		delete myZoo[i];
	return (0);
}


