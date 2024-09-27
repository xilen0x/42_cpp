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

#define RED "\033[91m"
#define GREEN "\033[92m"
#define RESET "\033[0m"

class ClapTrap
{
	protected:
		std::string _name;
		int 		_hitPoints;
		int 		_energyPoints;
		int 		_attackDamage;

	public:
		//CANONICAL FORM: Default constructor
		ClapTrap();

		//Overloaded constructor
		ClapTrap(const std::string& name);
	
		//CANONICAL FORM: Copy constructor
		ClapTrap(const ClapTrap& obj);

		//CANONICAL FORM: Assignment operator overload
		ClapTrap& operator=(const ClapTrap& obj);

		//CANONICAL FORM: Destructor
		~ClapTrap();

		//METHODS
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		//------ GETTERS ------
		std::string getName() const;
		int getHitPoints() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;
		
		//------ SETTERS ------
		//void	setAttackDamage(int attackDamage);
};

