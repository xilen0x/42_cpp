/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:16:04 by castorga          #+#    #+#             */
/*   Updated: 2024/09/24 11:16:07 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>


//default constructor
ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_name = "unknownClapTrap";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}
// constructor with name parameter
ClapTrap::ClapTrap(const std::string& name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

//copy constructor
ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = obj;
}

//assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
	if (this == &obj)
		return (*this);
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}

//--------------------------------------------------------------------------------------------
//member function attack
/*When ClapTrack attacks, it causes its target to lose _attackDamage hit points.
 Attacking cost 1 energy point each.*/
void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << YELLOW << "ClapTrap " << this->_name << " has no hit points and cannot attack!" << RESET << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << YELLOW << "ClapTrap " << this->_name << " has no energy and cannot attack!" << RESET << std::endl;
		return ;
	}
	this->_energyPoints -= 1;
	std::cout << std::endl;
	std::cout << YELLOW << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << RESET << std::endl;
}

//member function takeDamage
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already destroyed!" << std::endl;
        return;
    }
    this->_hitPoints -= this->_attackDamage;
	// this->_attackDamage -= amount;
    if (this->_hitPoints <= 0)
    {
        this->_hitPoints = 0;
        std::cout << RED  << "ClapTrap " << this->_name << " has been destroyed!" << RESET << std::endl;
    }
    std::cout << "ClapTrap " << this->_name << " receives " << amount << ", and now has " << this->_hitPoints << " Hit points!" << std::endl;
	std::cout << std::endl;
}

//member function beRepaired
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << RED << "ClapTrap " << this->_name << " can't be repaired because it has no hit points" << RESET << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		// std::cout << "ClapTrap " << "Object ClapTrap " << this->_name << " can't be repaired because it has no energy" << std::endl;
		std::cout << RED << "ClapTrap " << this->_name << " can't be repaired because it has no energy" << RESET << std::endl;
		return ;
	}	
	this->_hitPoints += amount;
    this->_energyPoints -= 1;
    std::cout << "ClapTrap " << this->_name << " repairs " << amount << " hit points, and now has " << this->_hitPoints << " Hit points!" << std::endl;
}

//--------------------------------------------------------------------------------------------
//--- Getters functions
std::string ClapTrap::getName() const{
	return (this->_name);
}

int ClapTrap::getHitPoints() const{
	return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints() const{
	return (this->_energyPoints);
}

int ClapTrap::getAttackDamage() const{
	return (this->_attackDamage);
}

//destructor
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}
