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

class AMateria
{
	protected:
		std::string _type;
	
	public:
		//Default constructor
		AMateria(void);

		//Parameterized constructor
		AMateria(std::string const & type);

		//Copy constructor
		AMateria(const AMateria &copy);

		//Assignment operator
		AMateria &operator = (const AMateria &copy);

		//Getters
		std::string const & getType(void) const;//Returns the materia type

		//Member functions
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter & target);

		//Destructor
		virtual ~AMateria(void);

};
