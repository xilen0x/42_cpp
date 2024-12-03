/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:52:04 by castorga          #+#    #+#             */
/*   Updated: 2024/10/15 12:52:08 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Default constructor
Form::Form(): _name("default"), _signed(false), _gradeToSign(1), _gradeToExecute(1) {}

// Parameterized constructor
Form::Form(const std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

// Copy constructor
Form::Form(const Form &copy) : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {}

// Operator assignment overload
Form &Form::operator=(const Form &copy)
{
	if (this == &copy)
		return (*this);
	_signed = copy._signed;
	return (*this);
}

// Getters
std::string Form::getName() const
{
	return (_name);
}

bool Form::getSigned() const
{
	return (_signed);
}

int Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (_gradeToExecute);
}

// Setters
void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	_signed = true;
}

// print status
std::string Form::printStatus() const
{
	return _signed ? GREEN + std::string("FIRMADO!") + RESET : RED + std::string("NO FIRMADO") + RESET;
}

// Exception class
const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

// Operator insertion overload
std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out 
	<< "Form name			:" << YELLOW << form.getName() << RESET << std::endl
	<< "Form Status			:" << form.printStatus() << std::endl
	<< "Grade required to sign		:" << YELLOW << form.getGradeToSign() << RESET << std::endl
	<< "Grade required to execute	:" << YELLOW << form.getGradeToExecute() << RESET << std::endl;
	return (out);
}

// Destructor
Form::~Form() {}
