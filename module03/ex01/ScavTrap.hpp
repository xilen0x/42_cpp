/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:05:12 by castorga          #+#    #+#             */
/*   Updated: 2024/09/25 12:05:14 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//Clase ScavTrap que hereda de ClapTrap
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		//default constructor
		ScavTrap();

		//constructor with name parameter
		ScavTrap(const std::string& name);

		//copy constructor
		ScavTrap(const ScavTrap& obj);

		//assignment operator
		ScavTrap& operator=(const ScavTrap& obj);

		//destructor
		~ScavTrap();

		//member functions
		// void attack(const std::string& target);
		void guardGate();
};
