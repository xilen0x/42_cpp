/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:51:45 by castorga          #+#    #+#             */
/*   Updated: 2024/10/15 12:51:48 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <cstdlib>// exit

// Default constructor
Bureaucrat::Bureaucrat() {}

// Parameterized constructor
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade) {}

// Operator assignment overload
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this == &copy)
		return (*this);
	_grade = copy._grade;
	return (*this);
}

// Destructor
Bureaucrat::~Bureaucrat() {}

// Getters
std::string Bureaucrat::getName(void) const
{ 
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

// Setters
void Bureaucrat::incrementGrade()
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
	std::cout << "Burocrata sube un nivel" << std::endl;
}

void Bureaucrat::decrementGrade()
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
	std::cout << "Burocrata baja un nivel" << std::endl;
}

void Bureaucrat::signForm(AForm &form)
{
	try {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cerr << _name << " couldn’t sign " << form.getName()
                  << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &form)
{
	try {
        form.execute(*this);
        std::cout << _name << " executed " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cerr << _name << " couldn’t execute " << form.getName()
                  << " because " << e.what() << std::endl;
    }
}

// =========================Exception class =======================
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	std::cout << std::endl;
	return ("Exception: Grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	std::cout << std::endl;
	return ("Exception: Grade is too low!");
}

// Operator insertion overload
std::ostream &operator<<(std::ostream &out, const Bureaucrat &buro)
{
	out << "Burocrata " << buro.getName() << ". Grado : " << YELLOW << buro.getGrade() << RESET << std::endl;
	return (out);
}
