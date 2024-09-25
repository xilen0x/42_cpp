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

// #include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

//default constructor
ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "unknown";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}
// constructor with name parameter
// ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name, 100, 50, 20)
// {
// 	std::cout << "ScavTrap constructor called" << std::endl;
// }

//copy constructor
ScavTrap::ScavTrap(const ScavTrap& obj)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = obj;
}

//assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	if (this == &obj)
		return (*this);
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}
