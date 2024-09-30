/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:45:18 by castorga          #+#    #+#             */
/*   Updated: 2024/09/30 11:45:20 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << YELLOW << "DiamondTrap default constructor called" << RESET << std::endl;
	ClapTrap::_name = "Default ClapTrap";
	_name = "Default DiamondTrap";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name")
{
	std::cout << YELLOW << "DiamondTrap overloaded constructor called" << RESET << std::endl;
	_nameD = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
	std::cout << YELLOW << "DiamondTrap copy constructor called" << RESET << std::endl;
	*this = obj;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
	std::cout << YELLOW << "DiamondTrap assignment operator called" << RESET << std::endl;
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << YELLOW << "DiamondTrap destructor called" << RESET << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << CYAN << "DiamondTrap name: " << this->_nameD << RESET << std::endl;
	std::cout << CYAN << "ClapTrap name: " << _name << RESET << std::endl;
}
