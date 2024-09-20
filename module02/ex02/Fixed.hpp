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
		Fixed( const int value );
		Fixed( const float value );
		Fixed( const Fixed& obj );//constructor de copia
		~Fixed();

		//Sobrecarga de operadores
		Fixed& operator=( const Fixed& obj );
		bool	operator>( const Fixed& obj ) const;
		bool	operator<( const Fixed& obj ) const;
		bool	operator>=( const Fixed& obj ) const;
		bool	operator<=( const Fixed& obj ) const;
		bool	operator==( const Fixed& obj ) const;
		bool	operator!=( const Fixed& obj ) const;

		Fixed	operator+( const Fixed& obj ) const;
		Fixed	operator-( const Fixed& obj ) const;
		Fixed	operator*( const Fixed& obj ) const;
		Fixed	operator/( const Fixed& obj ) const;

		Fixed&	operator++( void );//Pre-increment
		Fixed	operator++( int );//Post-increment
		Fixed&	operator--( void );//Pre-decrement
		Fixed	operator--( int );//Post-decrement

		static Fixed&	min( Fixed& a, Fixed& b );//Funcion que devuelve el menor de dos objetos Fixed
		static Fixed&	max( Fixed& a, Fixed& b );
		static const Fixed&	min( const Fixed& a, const Fixed& b );//Funcion que devuelve el menor de dos objetos Fixed
		static const Fixed&	max( const Fixed& a, const Fixed& b );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<( std::ostream& o, const Fixed& obj );//Sobrecarga del operador de salida

#endif