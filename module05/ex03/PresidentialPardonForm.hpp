/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:37:00 by castorga          #+#    #+#             */
/*   Updated: 2024/10/16 15:37:02 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;

	public:
		// Default constructor
		PresidentialPardonForm();

		// Parameterized constructor
		PresidentialPardonForm(const std::string &target);

		// Copy constructor
		PresidentialPardonForm(const PresidentialPardonForm &copy);

		// Overload operator
		PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);

		// Getters
		std::string getTarget();
		
		// Destructor
		~PresidentialPardonForm();

		//execute form
		void execute(Bureaucrat const &executor) const;
};

