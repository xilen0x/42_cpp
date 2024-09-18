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
};
