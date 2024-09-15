#include "Fixed.hpp"

// Default constructor
Fixed::Fixed()
{
	this->_fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed( const Fixed &copyConstructor )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copyConstructor;
}

// Copy assignment operator overload
Fixed &Fixed::operator=( const Fixed &copyConstructor )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointValue = copyConstructor.getRawBits();
	return (*this);
}

// Get the raw bits
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

// Set the raw bits
void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

// Destructor
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}
