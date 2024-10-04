/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:33:42 by castorga          #+#    #+#             */
/*   Updated: 2024/10/04 13:33:43 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

//Default constructor
MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		this->_source[i] = NULL;
	}
}

//Copy constructor
MateriaSource::MateriaSource(const MateriaSource &copy)
{
	*this = copy;
}

//Assignment operator
MateriaSource &MateriaSource::operator = (const MateriaSource &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
		{
			this->_source[i] = copy._source[i];
		}
	}
	return (*this);
}

//Member functions
void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] == NULL)
		{
			this->_source[i] = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] != NULL && this->_source[i]->getType() == type)
		{
			return (this->_source[i]->clone());
		}
	}
	return (NULL);
}

//Destructor
MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] != NULL)
		{
			delete this->_source[i];
		}
	}
}
