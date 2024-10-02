/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:11:11 by castorga          #+#    #+#             */
/*   Updated: 2024/10/02 13:11:14 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		//default constructor
		Dog();
		
		//copy constructor
		Dog(const Dog &obj);
		
		//assignment operator
		Dog& operator=(const Dog &obj);

		//destructor
		~Dog();

		//member function
		void makeSound() const;
};
