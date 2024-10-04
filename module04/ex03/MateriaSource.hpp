/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:32:50 by castorga          #+#    #+#             */
/*   Updated: 2024/10/04 13:32:52 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _source[4];
	
	public:
		//Default constructor
		MateriaSource(void);

		//Copy constructor
		MateriaSource(const MateriaSource &copy);

		//Assignment operator
		MateriaSource &operator = (const MateriaSource &copy);

		//Member functions
		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const & type);

		//Destructor
		virtual ~MateriaSource(void);
};

