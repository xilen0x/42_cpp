#include "ClapTrap.hpp"
#include <iostream>

int main( void )
{
	ClapTrap    Pepsi("Pepsi");
    ClapTrap    Coca("Coca");

    Pepsi.attack("Coca");
	std::cout << std::endl;
    for(int i = 0; i < 10; i++)
	{
        Coca.attack("Pepsi");
	}
	std::cout << std::endl;
	Pepsi.beRepaired(20);
	std::cout << std::endl;
    for(int i = 0; i < 10; i++)
	{
        Pepsi.takeDamage(2);
	}
	return (0);
}
/*
	// ClapTrap obj1("Pepsi");
	// ClapTrap obj2("Coca");

	// obj1.attack("Coca");
	// obj2.takeDamage(5);

	// obj2.attack("Pepsi");
	// obj1.takeDamage(5);

	// obj1.beRepaired(5);
	// obj2.beRepaired(5);
*/