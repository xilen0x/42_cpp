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
RobotomyRequestForm::RobotomyRequestForm() : 
AForm("RobotomyRequestForm", 72, 45), _target("default") {}

// Parameterized constructor
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : 
AForm("RobotomyRequestForm", 72, 45), _target(target) {}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : 
AForm(copy), _target(copy._target) {}

// Overload operator
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this == &copy)
		return *this;
	_target = copy._target;
	return *this;
}

// Getters
std::string RobotomyRequestForm::getTarget() { return _target; }

// execute form
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!getSigned())
        throw NotPossibleExecute();
    std::cout << "Bzzzzz... drilling noises..." << std::endl;
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    if (rand() % 2 == 0) {
        std::cout << _target << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << "The robotomy failed on " << _target << "." << std::endl;
    }
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm() {}