/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:52:18 by castorga          #+#    #+#             */
/*   Updated: 2024/10/15 12:52:20 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

//Colors
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define RESET "\033[0m"


class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool 				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		
	public:
		// Constructors
		Form();

		// Parameterized constructor
		Form(const std::string name, int gradeToSign, int gradeToExecute);

		// Copy constructor
		Form(const Form &copy);

		// Operator assignment overload
		Form &operator=(const Form &copy);

		// Destructor
		~Form();

		// Getters
		std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		// Setters
		void beSigned(Bureaucrat &bureaucrat);

		// print status
		std::string printStatus() const;

		// Exception class
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

//Operator overload
std::ostream &operator<<(std::ostream &out, const Form &form);

