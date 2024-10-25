/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:36:30 by castorga          #+#    #+#             */
/*   Updated: 2024/10/16 15:36:33 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <string>

class AForm;

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;

	public:
		// constructor
		RobotomyRequestForm();

		// Parameterized constructor
		RobotomyRequestForm(const std::string &target);

		// Copy constructor
		RobotomyRequestForm(const RobotomyRequestForm &copy);

		// Overload operator
		RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);

		// Getters
		std::string getTarget();

		// Destructor
		~RobotomyRequestForm();

		//execute form
		void execute(Bureaucrat const &executor) const;
};
