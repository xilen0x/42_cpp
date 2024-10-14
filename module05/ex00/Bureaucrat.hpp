#pragma once

#include <iostream>

//class Bureaucrat(just declaration)
class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

	public:
		// Constructors
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