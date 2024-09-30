/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:05:03 by castorga          #+#    #+#             */
/*   Updated: 2024/09/25 12:05:05 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

//default constructor
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor Name called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}
//Overloaded constructor
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor Name called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}
//copy constructor
ScavTrap::ScavTrap(const ScavTrap& obj)
{
	std::cout << "ScavTrap copy constructor Name called" << std::endl;
	*this = obj;
}

//assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	std::cout << "ScavTrap assignment operator Name called" << std::endl;
	if (this == &obj)
		return (*this);
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}

//destructor
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor Name called" << std::endl;
}

//ATTACK METHOD OVERLOAD
void ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is already destroyed!" << std::endl;
		return;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't attack because it has no energy" << std::endl;
		return;
	}
	this->_energyPoints -= 1;
	
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!. Available: " << this->_hitPoints << " Hit points!" << std::endl;
	std::cout << std::endl;
}

//NEW METHOD
void ScavTrap::guardGate()
{
	std::cout << CYAN << "ScavTrap " << this->_name << " has entered in Gate keeper mode!" << RESET << std::endl;
}
