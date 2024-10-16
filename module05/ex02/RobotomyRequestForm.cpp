/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:36:23 by castorga          #+#    #+#             */
/*   Updated: 2024/10/16 15:36:25 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>// std::rand
#include <ctime>// std::time

// constructor
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy) { *this = copy; }

// Overload operator
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this == &copy)
		return (*this);
	AForm::operator=(copy);
	this->_target = copy._target;
	return (*this);
}

// execute form
void RobotomyRequestForm::executeForm(void) const
{
	std::srand(std::time(0));
    int randomValue = std::rand();
    bool	fiftyPercentChance = (randomValue % 2) == 0;

	if (fiftyPercentChance)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "The robotomy from " << _target << " failed" << std::endl;
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm() {}