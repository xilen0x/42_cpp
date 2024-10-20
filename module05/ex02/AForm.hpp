/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:52:18 by castorga          #+#    #+#             */
/*   Updated: 2024/10/15 12:52:20 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
// #include "RobotomyRequestForm.hpp"e

//Colors
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define RESET "\033[0m"


class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool 				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		
	public:
		// Constructors
		AForm();

		// Parameterized constructor
		AForm(const std::string name, int gradeToSign, int gradeToExecute);

		// Copy constructor
		AForm(const AForm &copy);

		// Operator assignment overload
		AForm &operator=(const AForm &copy);

		// Destructor
		virtual ~AForm();

		// Getters
		std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		// Setters
		void beSigned(const Bureaucrat &bureaucrat);

		// print status
		std::string printStatus() const;

		// Execute form
		virtual void execute(Bureaucrat const &executor) const = 0;

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
		class NotPossibleExecuteException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

//Operator overload
std::ostream &operator<<(std::ostream &out, const AForm &form);

