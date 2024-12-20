/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:31:32 by castorga          #+#    #+#             */
/*   Updated: 2024/10/04 13:31:34 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

//Interfaz que representa una fuente de materiales
//(define un objeto que puede almacenar materias y crear nuevas instancias a 
//partir de las materias conocidas.)
class IMateriaSource
{
	public:
		//Destructor
		virtual ~IMateriaSource(void) {}

		//Member functions
		virtual void learnMateria(AMateria* m) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};
