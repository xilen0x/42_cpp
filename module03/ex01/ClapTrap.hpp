/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:16:13 by castorga          #+#    #+#             */
/*   Updated: 2024/09/24 11:16:16 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class ClapTrap
{
	private:
		std::string _name;
		int 		_hitPoints;
		int 		_energyPoints;
		int 		_attackDamage;

	public:
		//default constructor
		ClapTrap();

		//constructor with name parameter
		ClapTrap(const std::string& name);

		//constructor with two parameters
		// ClapTrap(const std::string& name, int attackDamage);
		
		//copy constructor
		ClapTrap(const ClapTrap& obj);

		//assignment operator
		ClapTrap& operator=(const ClapTrap& obj);

		//destructor
		~ClapTrap();

		//member functions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		//getters functions
		std::string getName() const;
		int getHitPoints() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;

		//setters functions
		// void setAttackDamage(int attackDamage);
};
