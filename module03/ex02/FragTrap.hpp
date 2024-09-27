/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:43:43 by castorga          #+#    #+#             */
/*   Updated: 2024/09/27 17:43:51 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		/* data */
	public:
		//CANONICAL FORM: Default constructor
		FragTrap();

		//Overloaded constructor
		FragTrap(const std::string& name);

		//CANONICAL FORM: Copy constructor
		FragTrap(const FragTrap& obj);

		//CANONICAL FORM: Assignment operator overload
		FragTrap& operator=(const FragTrap& obj);

		//CANONICAL FORM: Destructor
		~FragTrap();

		//ATTACK METHOD OVERLOAD
		void attack(const std::string& target);

		//NEW METHOD
		void highFivesGuys(void);
};

