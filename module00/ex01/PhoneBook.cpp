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

	if (this->count == 8)
		this->count = 0;
	do
	{
		std::cout << "\nFirst name: ";
		getline(std::cin, in);
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
		// printContactList();
		this->count++;
		std::cout << "\nDo you want to add another contact? (y/n): ";
		getline(std::cin, in);
		if (in == "n")
		{
			printContactList();
			return ;
		}
	} while (in == "y");
	
}

int getArrayLength(int size) {
    return size;
}


void	PhoneBook::printContactList(void)
{
	int arrayLength = sizeof(this->contactArray) / sizeof(this->contactArray[0]);
	headerMenu();
	for (int i = 0; i < getArrayLength(arrayLength); i++)
	{
		std::cout << i << " | ";
		std::cout << this->contactArray[i].getFirstName() << " | ";
		std::cout << this->contactArray[i].getLastName() << " | ";
		std::cout << this->contactArray[i].getNickName() << " | ";
		std::cout << this->contactArray[i].getPhoneNumber() << std::endl;
	}
}
int	stringToInt(std::string str)
{
	int		num = 0;
	int		i = 0;

	while (str[i] != '\0')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num);
}

void	PhoneBook::printContactList(std::string index)
{
	int	idx = stringToInt(index);
	headerMenu();
	std::cout << this->contactArray[idx].getFirstName() << " | ";
	std::cout << this->contactArray[idx].getLastName() << " | ";
	std::cout << this->contactArray[idx].getNickName() << " | ";
	std::cout << this->contactArray[idx].getPhoneNumber() << std::endl;
}

// void	PhoneBook::printContactList(int index)
// {
// 	headerMenu();
// 	std::cout << this->contactArray[index].getFirstName() << " | ";
// 	std::cout << this->contactArray[index].getLastName() << " | ";
// 	std::cout << this->contactArray[index].getNickName() << " | ";
// 	std::cout << this->contactArray[index].getPhoneNumber() << std::endl;
// }

//funcion que limpia la pantalla
void	clearScreen(void)
{
	std::cout << "\033[2J\033[1;1H";
} 

void	PhoneBook::searchContact(void)
{
	std::string	in;

	if (this->count == 0)
	{
		clearScreen();
		std::cout << "\nPhonebook is empty!\n" << std::endl;
		return ;
	}
	else
	{
		std::cout << "Select an index: ";
		getline(std::cin, in);
		if (in.length() == 1 && in[0] >= '0' && in[0] <= '7')
		{
			printContactList(in);
			return ;
		}
		else
			std::cout << "Invalid index" << std::endl;
	}
}

// void	PhoneBook::exitProgram(void)
// {
// 	std::cout << "Goodbye!" << std::endl;
// }

PhoneBook::PhoneBook()
{
	this->count = 0;
}

PhoneBook::~PhoneBook(){}

