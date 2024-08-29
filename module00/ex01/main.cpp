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
// #include "Contact.hpp"
#include <iostream>

void	menu(void)
{
	std::cout << "\n ################### PHONEBOOK ###################" << std::endl;
	std::cout << "\n  Select an option:\n" << std::endl;
	std::cout << "\n  1.- ADD" << std::endl;
	std::cout << "\n  2.- SEARCH" << std::endl;
	std::cout << "\n  3.- EXIT" << std::endl;
}

void	optionsMenu(void)
{
	std::cout << "||-------------------------------------------------||" << std::endl;
	std::cout << "||      ADD      |     SEARCH     |      EXIT      ||" << std::endl;
	std::cout << "||-------------------------------------------------||" << std::endl;
}

int main(void)
{
	std::string	option;
	PhoneBook	pbook1;

	menu();
	do
	{
		getline(std::cin, option);
		if (option == "1" || option == "ADD" || option == "add")
		{
			optionsMenu();
			pbook1.addContact();

		}
		else if (option == "2" || option == "SEARCH" || option == "search")
		{
			optionsMenu();

		}
		else if	(option == "3" || option == "exit" || option == "EXIT")
		{
			optionsMenu();

		}
		else
			std::cout << "opcion incorrecta!" << std::endl;
	} while (!(option == "3" || option == "exit" || option == "EXIT"));
	return (0);
}
