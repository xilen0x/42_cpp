/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:17:16 by castorga          #+#    #+#             */
/*   Updated: 2024/08/28 17:17:18 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include "Utils.hpp"
#include <iostream>

void	PhoneBook::addContact(void)
{
	std::string	in;

	do
	{
		std::cout << "First name: ";
		getline(std::cin, in);
		if (this->count < 8)
		{
			this->contactArray[this->count].setFirstName(in);
			std::cout << "Last name: ";
			getline(std::cin, in);
			this->contactArray[this->count].setLastName(in);
			std::cout << "Nickname: ";
			getline(std::cin, in);
			this->contactArray[this->count].setNickname(in);
			std::cout << "Phone number: ";
			getline(std::cin, in);
			this->contactArray[this->count].setPhoneNumber(in);
			std::cout << "Darkest secret: ";
			getline(std::cin, in);
			this->contactArray[this->count].setDarkestSecret(in);
			this->count++;
			break;
		}
		else
		{
			this->count = 0;
			continue;
		}
	} while (this->count < 8);
	
	// getline(std::cin, in);
	// if (this->count < 8)
	// {
	// 	this->contactArray[this->count].setFirstName(in);
	// 	this->count++;
	// }
	// else
	// {
	// 	this->count = 0;
	// 	this->contactArray[this->count].setFirstName(in);
	// }
}
void	PhoneBook::printContactList(void)
{
	headerMenu();
	for (int i = 0; i < this->count; i++)
	{
		std::cout << i << " | ";
		std::cout << this->contactArray[i].getFirstName() << " | ";
		std::cout << this->contactArray[i].getLastName() << " | ";
		std::cout << this->contactArray[i].getNickName() << " | ";
		std::cout << this->contactArray[i].getPhoneNumber() << std::endl;
	}
}

void	PhoneBook::printContactList(int index)
{
	headerMenu();
	std::cout << this->contactArray[index].getFirstName() << " | ";
	std::cout << this->contactArray[index].getLastName() << " | ";
	std::cout << this->contactArray[index].getNickName() << " | ";
	std::cout << this->contactArray[index].getPhoneNumber() << std::endl;
}

//funcion que limpia la pantalla
void	clearScreen(void)
{
	std::cout << "\033[2J\033[1;1H";
} 



// void	PhoneBook::searchContact(void)
// {
// 	std::string	in;

// 	std::cout << "searching..." << std::endl;
// 	// std::cout << "First name: ";
// 	// getline(std::cin, in);
// }

// void	PhoneBook::exitProgram(void)
// {
// 	std::cout << "Goodbye!" << std::endl;
// }

PhoneBook::PhoneBook()
{
	this->count = 0;
}

PhoneBook::~PhoneBook(){}

