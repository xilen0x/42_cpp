/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:33:13 by castorga          #+#    #+#             */
/*   Updated: 2024/10/24 17:33:17 by castorga         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "Array.hpp"

// Default constructor
template <typename T>
Array<T>::Array() : _n(0), _array(NULL) {}

// Constructor with parameter - Crea un array de n elementos
template <typename T>
Array<T>::Array(unsigned int n) : _n(n), _array(new T[n]) {}

// Copy constructor
template <typename T>
Array<T>::Array(const Array &copy)
{
	_n = copy._n;
	_array = new T[_n];
	for (unsigned int i = 0; i < _n; i++)
		_array[i] = copy._array[i];
}

// Assignment operator
template <typename T>
Array<T> &Array<T>::operator=(const Array &copy)
{
	if (this == &copy)
		return (*this);
	delete [] _array;
	_n = copy._n;
	_array = new T[_n];
	for (unsigned int i = 0; i < _n; i++)
		_array[i] = copy._array[i];
	return (*this);
}

// Method to get the element at the index
template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _n)
		throw std::out_of_range("Index out of range");
	return (_array[index]);
}

// Method to get the size of the array
template <typename T>
unsigned int Array<T>::size() const
{
	return (_n);
}

// Destructor
template <typename T>
Array<T>::~Array()
{
	delete [] _array;
}
