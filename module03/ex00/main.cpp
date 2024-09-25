/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:15:53 by castorga          #+#    #+#             */
/*   Updated: 2024/09/24 11:15:54 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

// void printStatus(const ClapTrap& hero, const ClapTrap& villain)
// {
//     std::cout << std::left << std::setw(20) << hero.getName() + " Hit points" << " : " << hero.getHitPoints() << std::endl;
//     std::cout << std::left << std::setw(20) << hero.getName() + " Energy points" << " : " << hero.getEnergyPoints() << std::endl;
//     std::cout << std::left << std::setw(20) << hero.getName() + " Attack damage" << " : " << hero.getAttackDamage() << std::endl;
//     std::cout << std::endl;
// 	std::cout << std::left << std::setw(20) << villain.getName() + " Hit points" << " : " << villain.getHitPoints() << std::endl;
//     std::cout << std::left << std::setw(20) << villain.getName() + " Energy points" << ": " << villain.getEnergyPoints() << std::endl;
//     std::cout << std::left << std::setw(20) << villain.getName() + " Attack damage" << ": " << villain.getAttackDamage() << std::endl;
//     std::cout << std::endl;
// 	std::cout << "--------------------------" << std::endl;
// }
// void battle(ClapTrap& attacker, ClapTrap& defender)
// {
//     attacker.attack(defender.getName());  // El atacante realiza el ataque
//     defender.takeDamage(attacker.getAttackDamage());  // El defensor pierde puntos de vida en función del daño del atacante
// }
// int	initMenu(int &choice)
// {
//     std::cout << "Choose an option: " << std::endl;
// 	std::cout << "1. Hero attacks Villain" << std::endl;
// 	std::cout << "2. Villain attacks Hero" << std::endl;
// 	std::cout << "3. Hero repairs" << std::endl;
// 	std::cout << "4. Villain repairs" << std::endl;
// 	std::cout << "0. Exit" << std::endl;
//     while (!(std::cin >> choice) || (choice != 0 && choice != 1 && choice != 2 && choice != 3 && choice != 4))
//     {
//         std::cout << "Invalid input. Please enter 1, 2, 3, 4 or 0: ";
//         std::cin.clear();
//         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//     }
// 	return (0);
// }
// int	finalMenu(ClapTrap &hero, ClapTrap &villain)
// {
//     std::cout << "========= Battle ended! =========" << std::endl;
// 	if (hero.getHitPoints() <= 0)
// 		std::cout << "*** Villain wins! ***" << std::endl;
// 	else if (villain.getHitPoints() <= 0)
// 		std::cout << "*** Hero wins! ***" << std::endl;
// 	else
// 		std::cout << "*** It's a draw! ***" << std::endl;
// 	return (0);
// }

// int main(void)
// {
//     ClapTrap	hero("Hero");
//     ClapTrap	villain("Villain");
//     int			choice;

//     std::cout << "\n***** INITIAL STATUS *****" << std::endl;
//     printStatus(hero, villain);
//     while (hero.getHitPoints() > 0 && villain.getHitPoints() > 0)
//     {
// 		initMenu(choice);
// 		switch (choice)
// 		{
// 			case 1:
// 				battle(hero, villain);
// 				break;
// 			case 2:
// 				battle(villain, hero);
// 				break;
// 			case 3:
// 				hero.beRepaired(1);
// 				break;
// 			case 4:
// 				villain.beRepaired(1);
// 				break;
// 			case 0:
// 				return (0);
// 			default:
// 				break;
// 		}
//         printStatus(hero, villain);
//     }
// 	finalMenu(hero, villain);
//     return (0);
// }

int main(void)
{
    ClapTrap	Pepsi("Pepsi");
    ClapTrap	CocaCola("CocaCola");

    Pepsi.attack("CocaCola");
    
	for(int i = 0; i < 5; i++)
        CocaCola.attack("Pepsi");
    
	Pepsi.beRepaired(20);
    
	for(int i = 0; i < 5; i++)
		Pepsi.takeDamage(2);
	return (0);
}
