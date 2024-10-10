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
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	std::cout << "El gato dice: ";	cat->makeSound();
	std::cout << "El perro dice: "; dog->makeSound();
	std::cout << "El animal dice: "; meta->makeSound();

	delete meta;
	delete dog;
	delete cat;
	
	std::cout << "---------------------------" << std::endl;

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* cat2 = new WrongCat();

	std::cout << cat2->getType() << " " << std::endl;

	std::cout << "El gato dice: ";	cat2->makeSound();
	std::cout << "El animal dice: ";	meta2->makeSound();

	delete meta2;
	delete cat2;

	return (0);
}
