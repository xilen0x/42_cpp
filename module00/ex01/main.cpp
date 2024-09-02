/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:14:47 by castorga          #+#    #+#             */
/*   Updated: 2024/08/29 16:14:48 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "Utils.hpp"
#include <iostream>
#include <cstdlib>


void	menu(void)
{
	std::cout << "\n  Select an option:\n" << std::endl;
	std::cout << "\n  1.- ADD" << std::endl;
	std::cout << "\n  2.- SEARCH" << std::endl;
	std::cout << "\n  3.- EXIT" << std::endl;
}

void	headerMenu(void)
{
	std::cout << "||-------------------------------------------------||" << std::endl;
	std::cout << "||  FIRSTNAME  |  LASTNAME  |  NICKNAME  |  PHONE  ||" << std::endl;
	std::cout << "||-------------------------------------------------||" << std::endl;

}

int main(void)
{
	std::string	option;
	PhoneBook	pbook1;

	std::cout << "\n ################### PHONEBOOK ###################" << std::endl;
	// pbook1.printContactList();
	do
	{
		menu();
		std::cout << "\n:"; getline(std::cin, option);
		if (std::cin.eof())
            exit(1);
		if (option == "1" || option == "ADD" || option == "add")
		{
			pbook1.addContact();
			// clearScreen();
		}
		else if (option == "2" || option == "SEARCH" || option == "search")
		{
			pbook1.searchContact();
			// clearScreen();
		}
		else if	(option == "3" || option == "exit" || option == "EXIT")
		{
			std::cout << "\nGoodbye!\n" << std::endl;
			return (0);
		}
		else
		{
			// clearScreen();
			std::cout << "\nOpcion incorrecta!\n" << std::endl;
			continue;
		}
		// pbook1.printContactList();
	} while (!(option == "3" || option == "exit" || option == "EXIT"));
	return (0);
}
