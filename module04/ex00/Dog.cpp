/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:11:05 by castorga          #+#    #+#             */
/*   Updated: 2024/10/02 13:11:06 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//default constructor
Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog object created" << std::endl;
}

//copy constructor
Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

//assignment operator
Dog& Dog::operator=(const Dog &obj)
{
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

//member function
void	Dog::makeSound() const
{
	std::cout << YELLOW << "guof guof guof!" << RESET << std::endl;
}

//destructor
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}