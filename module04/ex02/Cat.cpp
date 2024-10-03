/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:11:21 by castorga          #+#    #+#             */
/*   Updated: 2024/10/02 13:11:23 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//default constructor
Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

//copy constructor
Cat::Cat(const Cat &obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = obj._type;
	this->_brain = new Brain(*obj._brain);
}

//assignment operator
Cat& Cat::operator=(const Cat &obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
		this->_brain = new Brain(*obj._brain);
	}	
	return (*this);
}

//member function
void	Cat::makeSound() const
{
	std::cout << GREEN << "miau miau miau!" << RESET << std::endl;
}

//destructor
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}
