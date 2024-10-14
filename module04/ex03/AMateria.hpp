/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:04:34 by castorga          #+#    #+#             */
/*   Updated: 2024/10/03 18:04:36 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

//clase que representa un material que puede ser equipado por un personaje
class AMateria
{
	protected:
		std::string _type;
	
	public:
		//Default constructor
		AMateria(void);

		//Parameterized constructor
		AMateria(std::string const & type);//constructor que recibe un string constante por referencia llamado type

		//Copy constructor
		AMateria(const AMateria &copy);

		//Assignment operator
		AMateria &operator = (const AMateria &copy);

		//Getters
		std::string const & getType(void) const;//funcion que devuelve un string constante por referencia llamado type

		//Member functions
		virtual AMateria* clone(void) const = 0;//funcion que devuelve un puntero a AMateria
		virtual void use(ICharacter& target);//funcion que recibe una referencia a ICharacter llamada target

		//Destructor
		virtual ~AMateria(void);

};
