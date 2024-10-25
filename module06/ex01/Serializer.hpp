/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:53:14 by castorga          #+#    #+#             */
/*   Updated: 2024/10/24 10:53:16 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
#include <stdint.h>

struct Data
{
	int 		n;
};

class Serializer
{
	private:
		// Default constructor
		Serializer();
		// Copy constructor
		Serializer(const Serializer &copy);
		// Assignment operator
		Serializer &operator=(const Serializer &copy);
		// Destructor
		~Serializer();
		
	public:

		// Member functions
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};