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
void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead and cannot attack" << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy and cannot attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	this->_energyPoints -= 1;
}

//member function takeDamage
void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints = _hitPoints - amount;
        std::cout << "ClapTrap " << _name << " receive " << amount << ", and now have " << _hitPoints << " points of damage!" << std::endl;
	if (this->_hitPoints < 0)
	{
		this->_hitPoints = 0;
	}	
}

//member function beRepaired
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't be repaired because it has no hit points" << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't be repaired because it has no energy" << std::endl;
		return ;
	}	
	std::cout << "ClapTrap " << _name << " repair " << amount << ", and now have " << _hitPoints << " Hit points!" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints -= 1;
}

//destructor
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}