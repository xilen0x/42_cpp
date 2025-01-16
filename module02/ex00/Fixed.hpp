#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int 				_fixedPointValue;
		static const int 	_fractionalBits = 8;

	public:
		Fixed();
		Fixed( const Fixed& obj );//constructor de copia
		Fixed& operator=( const Fixed& obj );//sobrecarga del operador de asignación
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif