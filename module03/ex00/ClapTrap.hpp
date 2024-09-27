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
#define YELLOW "\033[93m"
#define RESET "\033[0m"

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
		//void	setAttackDamage(int attackDamage);
};
