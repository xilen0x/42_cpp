/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:16:51 by castorga          #+#    #+#             */
/*   Updated: 2024/10/03 18:16:52 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

//Default constructor
Cure::Cure(void) : AMateria("cure")
{
}

//Copy constructor
Cure::Cure(const Cure &copy)
{
	*this = copy;
}

//Assignment operator
Cure &Cure::operator = (const Cure &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return (*this);
}

//Member functions
AMateria* Cure::clone(void) const
{
	AMateria *clone = new Cure(*this);
	return (clone);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

//Destructor
Cure::~Cure(void)
{
}
