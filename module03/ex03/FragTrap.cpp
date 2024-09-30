/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:43:34 by castorga          #+#    #+#             */
/*   Updated: 2024/09/27 17:43:36 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

//Default constructor
FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor Name called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

//Overloaded constructor
FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor Name called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

//Copy constructor
FragTrap::FragTrap(const FragTrap& obj)
{
	std::cout << "FragTrap copy constructor Name called" << std::endl;
	*this = obj;
}
//Assignment operator overload
FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	std::cout << "FragTrap assignment operator Name called" << std::endl;
	if (this == &obj)
		return (*this);
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}

//ATTACK METHOD OVERLOAD
// void FragTrap::attack(const std::string& target)
// {
// 	if (this->_hitPoints <= 0)
// 	{
// 		std::cout << "FragTrap " << this->_name << " is dead and cannot attack." << std::endl;
// 		return ;
// 	}
// 	if (this->_energyPoints < 10)
// 	{
// 		std::cout << "FragTrap " << this->_name << " has not enough energy to attack." << std::endl;
// 		return ;
// 	}
// 	this->_energyPoints -= 1;
// 	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
// }

//NEW METHOD
void FragTrap::highFivesGuys(void)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << CYAN << "FragTrap " << this->_name << " is dead and cannot high five." << RESET << std::endl;
		return ;
	}
	std::cout << CYAN << "FragTrap " << this->_name << " high fives guys!" << RESET << std::endl;
}

//Destructor
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor Name called" << std::endl;
}

