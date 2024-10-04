/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:04:23 by castorga          #+#    #+#             */
/*   Updated: 2024/10/03 18:04:25 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

//Default constructor
AMateria::AMateria(void) : _type("default")
{
}

//Parameterized constructor
AMateria::AMateria(std::string const & type) : _type(type)
{
}

//Copy constructor
AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

//Assignment operator
AMateria &AMateria::operator = (const AMateria &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return (*this);
}

//Getters
std::string const & AMateria::getType(void) const
{
	return (this->_type);
}

//Member functions
void AMateria::use(ICharacter& target)
{
	(void)target;
}

//Destructor
AMateria::~AMateria(void)
{
}
