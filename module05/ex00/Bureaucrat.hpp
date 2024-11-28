/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:51:04 by castorga          #+#    #+#             */
/*   Updated: 2024/10/15 12:51:06 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define RESET "\033[0m"

//class Bureaucrat(just declaration)
class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

	public:
		// Constructor
		Bureaucrat();

		// Parameterized constructor
		Bureaucrat(const std::string name, int grade);
		
		// Copy constructor
		Bureaucrat(const Bureaucrat &copy);
		
		// Operator assignment overload
		Bureaucrat &operator=(const Bureaucrat &copy);
		
		// Destructor
		~Bureaucrat();

		// Getters
		std::string getName() const;
		int getGrade() const;

		// Setters
		void incrementGrade();
		void decrementGrade();

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

// Operator insertion overload
std::ostream &operator<<(std::ostream &out, const Bureaucrat &buro);
