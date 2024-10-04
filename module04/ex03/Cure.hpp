/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:16:57 by castorga          #+#    #+#             */
/*   Updated: 2024/10/03 18:17:00 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		//Default constructor
		Cure(void);

		//Copy constructor
		Cure(const Cure &copy);

		//Assignment operator
		Cure &operator = (const Cure &copy);

		//Member functions
		virtual AMateria* clone(void) const;
		virtual void use(ICharacter& target);

		//Destructor
		virtual ~Cure(void);
};
