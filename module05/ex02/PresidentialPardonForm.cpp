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

// Default constructor
PresidentialPardonForm::PresidentialPardonForm() : 
AForm("PresidentialPardonForm", 25, 5), _target("default") {}

// Parameterized constructor
PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : 
AForm("PresidentialPardonForm", 25, 5), _target(target) {}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : 
AForm(copy), _target(copy._target) {}

// Overload operator
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	if (this == &copy)
		return (*this);
	_target = copy._target;
	return (*this);
}

// Getters
std::string PresidentialPardonForm::getTarget() { return _target; }

// execute form
void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!getSigned())
		throw NotPossibleExecute();
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm() {}
