/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:08:05 by castorga          #+#    #+#             */
/*   Updated: 2024/10/02 13:08:07 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

//COLORES
#define RESET		"\033[0m"
#define RED			"\033[31m"				/* Red */
#define GREEN		"\033[32m"				/* Green */
#define YELLOW		"\033[33m"				/* Yellow */
#define BLUE		"\033[34m"				/* Blue */

class Animal
{
	protected:
		std::string _type;
	public:
		//default constructor
		Animal();

		//copy constructor
		Animal(const Animal &obj);

		//assignment operator
		Animal& operator=(const Animal &obj);

		//member function
		virtual void makeSound() const;
		// void makeSound() const;

		//get function
		std::string getType() const;

		//destructor
		virtual ~Animal();

};
