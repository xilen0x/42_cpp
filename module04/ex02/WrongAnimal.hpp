/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:42:53 by castorga          #+#    #+#             */
/*   Updated: 2024/10/02 16:42:55 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		//Default constructor
		WrongAnimal();

		//Copy constructor
		WrongAnimal(const WrongAnimal &copy);

		//Assignment operator
		WrongAnimal &operator = (const WrongAnimal &copy);

		//Member function
		void makeSound() const;

		//Get function
		std::string getType() const;

		//Destructor
		~WrongAnimal();
};
