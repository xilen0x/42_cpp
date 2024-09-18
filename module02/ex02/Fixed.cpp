#include "Fixed.hpp"
#include <cmath> //to use roundf

// Default constructor
Fixed::Fixed()
{
	this->_fixedPointValue = 0;
}

Fixed::Fixed( const int value )
{
	this->_fixedPointValue = value << _fractionalBits;
}
Fixed::Fixed( const float value )
{
	this->_fixedPointValue = roundf(value * (1 << _fractionalBits));
}

// Copy constructor
Fixed::Fixed( const Fixed& obj )
{
	*this = obj;//se llama al operador de asignación
}

// Copy assignment operator
Fixed& Fixed::operator=( const Fixed& obj )
{
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

//--------------------------------------------------------------------------------------------

// --- Overload > operator ---
bool Fixed::operator>( const Fixed& obj ) const
{
	// return (this->getRawBits() > obj.getRawBits());
	return (this->_fixedPointValue > obj._fixedPointValue);
}

// --- Overload < operator ---
bool Fixed::operator<( const Fixed& obj ) const
{
	// return (this->getRawBits() < obj.getRawBits());
	return (this->_fixedPointValue < obj._fixedPointValue);
}

// --- Overload >= operator ---
bool Fixed::operator>=( const Fixed& obj ) const
{
	// return (this->getRawBits() >= obj.getRawBits());
	return (this->_fixedPointValue >= obj._fixedPointValue);
}

// --- Overload <= operator ---
bool Fixed::operator<=( const Fixed& obj ) const
{
	// return (this->getRawBits() <= obj.getRawBits());
	return (this->_fixedPointValue <= obj._fixedPointValue);
}

// --- Overload == operator ---
bool Fixed::operator==( const Fixed& obj ) const
{
	// return (this->getRawBits() == obj.getRawBits());
	return (this->_fixedPointValue == obj._fixedPointValue);
}

// --- Overload != operator ---
bool Fixed::operator!=( const Fixed& obj ) const
{
	// return (this->getRawBits() != obj.getRawBits());
	return (this->_fixedPointValue != obj._fixedPointValue);
}

//--------------------------------------------------------------------------------------------

// --- Overload + operator ---
Fixed Fixed::operator+( const Fixed& obj ) const
{
	Fixed result;
	result.setRawBits(this->_fixedPointValue + obj.getRawBits());
	return (result);
	// return (Fixed(this->toFloat() + obj.toFloat()));
}

// --- Overload - operator ---
Fixed Fixed::operator-( const Fixed& obj ) const
{
	Fixed result;
	result.setRawBits(this->_fixedPointValue - obj.getRawBits());
	return (result);
	// return (Fixed(this->toFloat() - obj.toFloat()));
}

// --- Overload * operator ---
Fixed Fixed::operator*( const Fixed& obj ) const
{
	Fixed result;
	result.setRawBits((this->_fixedPointValue * obj.getRawBits()) >> _fractionalBits);
	return (result);
	// return (Fixed(this->toFloat() * obj.toFloat()));
}

// --- Overload / operator ---
Fixed Fixed::operator/( const Fixed& obj ) const
{
	Fixed result;
	result.setRawBits((this->_fixedPointValue << _fractionalBits) / obj.getRawBits());
	return (result);
	// return (Fixed(this->toFloat() / obj.toFloat()));
}

//--------------------------------------------------------------------------------------------

// --- Overload ++ operator(Pre-increment) ---
Fixed& Fixed::operator++( void )
{
	this->_fixedPointValue++;
	return (*this);
}

// --- Overload ++ operator(Post-increment) ---
Fixed Fixed::operator++( int )
{
	Fixed temp(*this);
	this->_fixedPointValue++;
	return (temp);
}

// --- Overload -- operator(Pre-decrement) ---
Fixed& Fixed::operator--( void )
{
	this->_fixedPointValue--;
	return (*this);
}

// --- Overload -- operator(Post-decrement) ---
Fixed Fixed::operator--( int )
{
	Fixed temp(*this);
	this->_fixedPointValue--;
	return (temp);
}

//--------------------------------------------------------------------------------------------

// --- Static member function min ---
Fixed& Fixed::min( Fixed& a, Fixed& b )
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

// --- Static member function max ---
Fixed& Fixed::max( Fixed& a, Fixed& b )
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

// --- Static member function min ---
const Fixed& Fixed::min( const Fixed& a, const Fixed& b )
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

// --- Static member function max ---
const Fixed& Fixed::max( const Fixed& a, const Fixed& b )
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}


// Destructor
Fixed::~Fixed(){}
