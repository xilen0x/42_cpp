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
		Fixed( const Fixed &copyConstructor );
		Fixed &operator=( const Fixed &copyConstructor );
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif