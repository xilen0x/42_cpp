/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:58:46 by castorga          #+#    #+#             */
/*   Updated: 2024/09/20 16:58:48 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;

	public:
		Fixed();//default constructor
		Fixed( const int value );//parameterized constructor
		Fixed( const float value );//parameterized constructor
		Fixed( const Fixed& obj );//copy constructor
		~Fixed();

		Fixed& operator=( const Fixed& obj );//assignment operator
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

		// Add abs() method
        Fixed abs() const;
};

std::ostream& operator<<( std::ostream& o, const Fixed& obj );
