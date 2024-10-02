/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:08:00 by castorga          #+#    #+#             */
/*   Updated: 2024/10/02 13:08:02 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//default constructor
Animal::Animal() : _type("Animal"){
	std::cout << "Animal constructor called" << std::endl;
}

//copy constructor
Animal::Animal(const Animal &obj) : _type(obj._type){
	std::cout << "Animal copy constructor called" << std::endl;
}

//assignment operator
Animal& Animal::operator=(const Animal &obj)
{
	if (this == &obj)
		return (*this);
	this->_type = obj._type;
	return (*this);
}

//member function
void	Animal::makeSound() const
{
	std::cout << RED << "rrrrrrrrrrrrr!" << RESET << std::endl;
}

//Getters
std::string Animal::getType() const
{
	return (this->_type);
}

//destructor
Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}