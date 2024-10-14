
#include "Bureaucrat.hpp"

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
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

// Exception class
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

// Operator insertion overload
std::ostream &operator<<(std::ostream &out, const Bureaucrat &buro)
{
	out << buro.getName() << ", bureaucrat grade " << buro.getGrade();
	return (out);
}
