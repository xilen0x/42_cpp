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

#include "AForm.hpp"

/*Required grades: sign 145, exec 137
Create a file <target>_shrubbery in the working directory, and writes ASCII trees
inside it.*/

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;

	public:
		// constructor
		ShrubberyCreationForm(std::string target);

		// Copy constructor
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);

		// Overload operator
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);

		// Destructor
		~ShrubberyCreationForm();

		//
		void executeForm(void) const;
};
