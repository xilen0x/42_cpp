/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:16:35 by castorga          #+#    #+#             */
/*   Updated: 2024/10/03 18:16:37 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

//Default constructor
Ice::Ice(void) : AMateria("ice")
{
}

//Copy constructor
Ice::Ice(const Ice &copy)
{
	*this = copy;
}

//Assignment operator
Ice &Ice::operator = (const Ice &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return (*this);
}

//Member functions
AMateria* Ice::clone(void) const
{
	AMateria *clone = new Ice(*this);//Se crea un nuevo objeto Ice con el contenido de la instancia actual
	return (clone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

//Destructor
Ice::~Ice(void)
{
}

