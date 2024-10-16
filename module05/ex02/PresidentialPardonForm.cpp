/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:36:51 by castorga          #+#    #+#             */
/*   Updated: 2024/10/16 15:36:54 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// constructor
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy) { *this = copy; }

// Overload operator
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	if (this == &copy)
		return (*this);
	AForm::operator=(copy);
	this->_target = copy._target;
	return (*this);
}

// execute form
void PresidentialPardonForm::executeForm(void) const
{
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm() {}
