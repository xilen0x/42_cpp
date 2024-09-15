#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(){
	_fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed( const Fixed &copyConstructor ){
	std::cout << "Copy constructor called" << std::endl;
	*this = copyConstructor;
}

// Copy assignment operator overload
Fixed &Fixed::operator=( const Fixed &copyConstructor ){
	std::cout << "Copy assignment operator called" << std::endl;
	_fixedPointValue = copyConstructor.getRawBits();
	return (*this);
}

// Destructor
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

// Get the raw bits
int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue);
}

// Set the raw bits
void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	_fixedPointValue = raw;
}
