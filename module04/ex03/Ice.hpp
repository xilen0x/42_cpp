/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:16:28 by castorga          #+#    #+#             */
/*   Updated: 2024/10/03 18:16:30 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		//Default constructor
		Ice(void);

		//Copy constructor
		Ice(const Ice &copy);

		//Assignment operator
		Ice &operator = (const Ice &copy);

		//Member functions
		virtual AMateria* clone(void) const;
		virtual void use(ICharacter& target);

		//Destructor
		virtual ~Ice(void);
};
