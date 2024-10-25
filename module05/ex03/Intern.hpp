/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:13:15 by castorga          #+#    #+#             */
/*   Updated: 2024/10/22 16:13:17 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "AForm.hpp"
# include <iostream>

class Intern
{
	public:
		// Constructors
		Intern(void);

		// Copy constructor
		Intern(Intern &copy);

		// Operator assignment overload
		Intern &operator=(Intern &copy);

		// Destructor
		~Intern(void);

		// Member functions
		AForm *makeForm(std::string formName, std::string target);

		// Exceptions
		class FormNotFound : public std::exception
		{
			public:
				const char *what() const throw();
		};
};
