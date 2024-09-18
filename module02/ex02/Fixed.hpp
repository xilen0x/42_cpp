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
		Fixed( const Fixed& obj );
		~Fixed();

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

		Fixed&	operator++( void );
		Fixed	operator++( int );
		Fixed&	operator--( void );
		Fixed	operator--( int );

		static Fixed&	min( Fixed& a, Fixed& b );
		static Fixed&	max( Fixed& a, Fixed& b );
		static const Fixed&	min( const Fixed& a, const Fixed& b );
		static const Fixed&	max( const Fixed& a, const Fixed& b );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<( std::ostream& o, const Fixed& obj );

#endif