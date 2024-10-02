/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:29:35 by castorga          #+#    #+#             */
/*   Updated: 2024/10/02 16:29:37 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//Default constructor
WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor" << std::endl;
	this->_type = "WrongCat";
}

//Copy constructor
WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
}

//Assignment operator
WrongCat &WrongCat::operator = (const WrongCat &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return (*this);
}

//Member function
void WrongCat::makeSound() const
{
	std::cout << "WrongCat sound - miau!!!" << std::endl;
}

//Destructor
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}