/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:36:00 by castorga          #+#    #+#             */
/*   Updated: 2024/10/16 15:36:02 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <string>

/*Required grades: sign 145, exec 137
Create a file <target>_shrubbery in the working directory, and writes ASCII trees
inside it.*/

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;

	public:
		// constructor
		ShrubberyCreationForm();

		// Parameterized constructor
		ShrubberyCreationForm(const std::string &target);

		// Copy constructor
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);

		// Overload operator
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);

		// Getters
		std::string getTarget();
		
		// Destructor
		~ShrubberyCreationForm();

		// Member functions
		void execute(Bureaucrat const &executor) const;
};
