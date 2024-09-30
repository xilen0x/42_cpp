/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:45:13 by castorga          #+#    #+#             */
/*   Updated: 2024/09/30 11:45:14 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	
	public:
		//CANONICAL FORM: Default constructor
		DiamondTrap();
		
		//Overloaded constructor
		DiamondTrap(const std::string& name);

		//CANONICAL FORM: Copy constructor
		DiamondTrap(const DiamondTrap& obj);

		//CANONICAL FORM: Assignment operator overload
		DiamondTrap& operator=(const DiamondTrap& obj);

		//CANONICAL FORM: Destructor
		~DiamondTrap();

		//METHODS
		void	whoAmI();
};
