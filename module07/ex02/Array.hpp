/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:12:22 by castorga          #+#    #+#             */
/*   Updated: 2024/10/24 16:12:24 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>

template <typename T>
class Array
{
	private:
		unsigned int	_n;
		T 				*_array;

	public:
		// Default constructor
		Array();

		// Constructor with parameter
		Array(unsigned int n);

		// Copy constructor
		Array(const Array &copy);

		// Assignment operator
		Array &operator=(const Array &copy);

		// Method to get the element at the index
		T &operator[](unsigned int index);

		// Method to get the size of the array
		unsigned int size() const;

		// Destructor
		~Array();
};

# include "Array.tpp"