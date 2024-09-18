#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap    Pepito("Pepito");
    ClapTrap    Narcis("Narcis");

    Pepito.attack("Narcis");
    for(int i = 0; i < 10; i++)
	{
        Narcis.attack("Pepito");
	}
	Pepito.beRepaired(20);
    for(int i = 0; i < 10; i++)
	{
        Pepito.takeDamage(2);
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