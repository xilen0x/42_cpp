#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;

	public:
		Fixed();
		Fixed( const int value );//constructor de int
		Fixed( const float value );//constructor de float
		Fixed( const Fixed& obj );//constructor de copia
		Fixed& operator=( const Fixed& obj );//sobrecarga del operador de asignación
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<( std::ostream& o, const Fixed& obj );

#endif