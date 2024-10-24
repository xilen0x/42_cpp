/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:53:03 by castorga          #+#    #+#             */
/*   Updated: 2024/10/24 10:53:05 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// Default constructor
Serializer::Serializer(){
}

// Copy constructor
Serializer::Serializer(const Serializer &copy)
{
	*this = copy;
}

// Assignment operator
Serializer &Serializer::operator=(const Serializer &copy)
{
	(void)copy;
	return (*this);
}

// Member functions
uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data *ptr = reinterpret_cast<Data*>(raw);
	return (ptr);
}

// Destructor
Serializer::~Serializer(){
}
