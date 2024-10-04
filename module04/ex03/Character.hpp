/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:24:17 by castorga          #+#    #+#             */
/*   Updated: 2024/10/04 13:24:19 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _inventory[4];
	
	public:
		//Default constructor
		Character(void);

		//Parameterized constructor
		Character(std::string name);

		//Copy constructor
		Character(const Character &copy);

		//Assignment operator
		Character &operator = (const Character &copy);

		//Getters
		virtual std::string const & getName(void) const;

		//Member functions
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		//Destructor
		virtual ~Character(void);
};
