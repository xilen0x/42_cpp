/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:40:16 by castorga          #+#    #+#             */
/*   Updated: 2024/10/02 17:40:17 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//Default constructor
Brain::Brain()
{
	std::cout << "Brain default constructor called!" << std::endl;
}

//Copy constructor
Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor called!" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
}

//Assignment operator
Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "Brain assignment operator called!" << std::endl;
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	return (*this);
}

//Destructor
Brain::~Brain(){
	std::cout << "Brain Destructor called!" << std::endl;
}
