/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:42:44 by castorga          #+#    #+#             */
/*   Updated: 2024/10/02 16:42:46 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Animal.hpp"

//Default constructor
WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor" << std::endl;
	this->_type = "WrongAnimal";
}

//Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
}

//Assignment operator
WrongAnimal &WrongAnimal::operator = (const WrongAnimal &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return (*this);
}

//Member function
void WrongAnimal::makeSound() const
{
	std::cout << RED << "GRGRGRGRGRGR!" << RESET << std::endl;
}

//Get function
std::string WrongAnimal::getType() const
{
	return (this->_type);
}

//Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}