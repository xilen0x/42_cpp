/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:52:04 by castorga          #+#    #+#             */
/*   Updated: 2024/10/15 12:52:08 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Default constructor
AForm::AForm(): _name("default"), _signed(false), _gradeToSign(42), _gradeToExecute(42) {}

// Parameterized constructor
AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute) : 
_name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	_signed = false;
}

// Copy constructor
AForm::AForm(const AForm &copy) :
 _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {
	if (copy._gradeToSign < 1 || copy._gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (copy._gradeToSign > 150 || copy._gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	_signed = copy._signed;	
 }

// Operator assignment overload
AForm &AForm::operator=(const AForm &copy)
{
	if (this == &copy)
		return (*this);
	_signed = copy._signed;
	return (*this);
}

// Destructor
AForm::~AForm() {}

// Getters
std::string AForm::getName() const
{
	return (_name);
}

bool AForm::getSigned() const
{
	return (_signed);
}

int AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (_gradeToExecute);
}

// Setters
void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _gradeToSign)
		_signed = true;
	else
	{
		_signed = false;
		throw AForm::GradeTooLowException();
	}
}

// Exception class
const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char *AForm::NotPossibleExecute::what() const throw()
{
	return ("Not possible to execute");
}

// Operator insertion overload
std::ostream &operator<<(std::ostream &out, const AForm &form)
{
	if (form.getSigned())
		return (out << form.getName() << " is signed, ");
	else
		return (out << form.getName() << " is not signed, ");
}
