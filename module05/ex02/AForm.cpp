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
AForm::AForm(): _name("default"), _signed(false), _gradeToSign(10), _gradeToExecute(20) {}

// Parameterized constructor
AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

// Copy constructor
AForm::AForm(const AForm &copy) : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {}

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
void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	_signed = true;
}

// print status
std::string AForm::printStatus() const
{
	return _signed ? GREEN + std::string("FIRMADO!") + RESET : RED + std::string("NO FIRMADO") + RESET;
}

// Execute form (pure virtual method)
void AForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() < getGradeToSign() && _signed == true)
        executeForm();
    else
        throw CannotExecute();
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

// Operator insertion overload
std::ostream &operator<<(std::ostream &out, const AForm &form)
{
	out 
	<< "Form name			:" << YELLOW << form.getName() << RESET << std::endl
	<< "Form Status			:" << form.printStatus() << std::endl
	<< "Grade required to sign		:" << YELLOW << form.getGradeToSign() << RESET << std::endl
	<< "Grade required to execute	:" << YELLOW << form.getGradeToExecute() << RESET << std::endl;
	return (out);
}
