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

// void addContact(PhoneBook &phoneBook) {
//     Contact newContact;
//     std::string input;

//     std::cout << "Enter First Name: ";
//     std::getline(std::cin, input);
//     newContact.setFirstName(input);

//     std::cout << "Enter Last Name: ";
//     std::getline(std::cin, input);
//     newContact.setLastName(input);

//     std::cout << "Enter Nickname: ";
//     std::getline(std::cin, input);
//     newContact.setNickname(input);

//     std::cout << "Enter Phone Number: ";
//     std::getline(std::cin, input);
//     newContact.setPhoneNumber(input);

//     std::cout << "Enter Darkest Secret: ";
//     std::getline(std::cin, input);
//     newContact.setDarkestSecret(input);

//     phoneBook.addContact(newContact);
// }


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
	pbook1.printContactList();
	do
	{
		menu();
		getline(std::cin, option);
		if (option == "1" || option == "ADD" || option == "add")
		{
			pbook1.addContact();
			clearScreen();
			pbook1.printContactList();

		}
		else if (option == "2" || option == "SEARCH" || option == "search")
		{
			headerMenu();

		}
		else if	(option == "3" || option == "exit" || option == "EXIT")
		{
			headerMenu();

		}
		else
			std::cout << "opcion incorrecta!" << std::endl;
	} while (!(option == "3" || option == "exit" || option == "EXIT"));
	return (0);
}
