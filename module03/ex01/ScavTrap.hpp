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

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		//CANONICAL FORM: Default constructor
		ScavTrap();

		//Overloaded constructor
		ScavTrap(const std::string& name);

		//CANONICAL FORM: Copy constructor
		ScavTrap(const ScavTrap& obj);

		//CANONICAL FORM: Assignment operator overload
		ScavTrap& operator=(const ScavTrap& obj);

		//CANONICAL FORM: Destructor
		~ScavTrap();

		//ATTACK METHOD OVERLOAD
		void attack(const std::string& target);

		//NEW METHOD
		void guardGate();

};
