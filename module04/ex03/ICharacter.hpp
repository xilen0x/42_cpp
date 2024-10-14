/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:22:28 by castorga          #+#    #+#             */
/*   Updated: 2024/10/04 13:22:30 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class AMateria;

//Interfaz que representa un personaje que puede equipar materiales.
//(define cómo deben comportarse los personajes)
class ICharacter
{
	public:
		//Destructor
		virtual ~ICharacter(void) {}

		//Member functions
		virtual std::string const & getName(void) const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};
