#include "Fixed.hpp"

// Default constructor
Fixed::Fixed()
{
	this->_fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed( const Fixed& obj )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;//se llama al operador de asignación
}

// Copy assignment operator
Fixed& Fixed::operator=( const Fixed& obj )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointValue = obj.getRawBits();//se obtiene el valor de obj y se asigna a la variable miembro _fixedPointValue
	return (*this);
}

// --- Getter ---
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

// --- Setter ---
void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
