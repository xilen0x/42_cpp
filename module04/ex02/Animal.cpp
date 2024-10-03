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
AAnimal::AAnimal() : _type("AAnimal"){
	std::cout << "AAnimal constructor called" << std::endl;
}

//copy constructor
AAnimal::AAnimal(const AAnimal &obj) : _type(obj._type){
	std::cout << "AAnimal copy constructor called" << std::endl;
}

//assignment operator
AAnimal& AAnimal::operator=(const AAnimal &obj)
{
	if (this == &obj)
		return (*this);
	this->_type = obj._type;
	std::cout << "AAnimal assignment operator called." << std::endl;
	return (*this);
}

//Getters
std::string AAnimal::getType() const
{
	return (this->_type);
}

//destructor
AAnimal::~AAnimal(){
	std::cout << "Animal destructor called" << std::endl;
}