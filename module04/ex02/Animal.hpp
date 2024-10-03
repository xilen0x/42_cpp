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

class AAnimal
{
	protected:
		std::string _type;

	public:
		//default constructor
		AAnimal();

		//copy constructor
		AAnimal(const AAnimal &obj);

		//assignment operator
		AAnimal& operator=(const AAnimal &obj);

		//Pure virtual function
		virtual void makeSound() const = 0;

		//get function
		std::string getType() const;

		//destructor
		virtual ~AAnimal();

};
