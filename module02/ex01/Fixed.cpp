#include "Fixed.hpp"
#include <cmath> //to use roundf

// Default constructor
Fixed::Fixed()
{
	this->_fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int value )
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = value << _fractionalBits;
}
Fixed::Fixed( const float value )
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(value * (1 << _fractionalBits));
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
	if (this != &obj)
		this->_fixedPointValue = obj.getRawBits();//se obtiene el valor de obj y se asigna a la variable miembro _fixedPointValue
	return (*this);
}

// --- Getter ---
int Fixed::getRawBits( void ) const
{
	return (this->_fixedPointValue);
}

// --- Setter ---
void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

// --- Convert to float ---
float Fixed::toFloat( void ) const
{
	return (static_cast<float>(this->getRawBits()) / (1 << _fractionalBits));
}

// --- Convert to int ---
int Fixed::toInt( void ) const
{
	return (this->_fixedPointValue >> _fractionalBits);
}

// --- Output stream operator ---
std::ostream& operator<<( std::ostream& o, const Fixed& obj )
{
	o << obj.toFloat();
	return (o);
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
