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

// Constructor
PhoneBook::PhoneBook()
{
	this->count = 0;
}

// Destructor
PhoneBook::~PhoneBook(){}

// Add contact
void	PhoneBook::addContact(void)
{
	std::string	fn, ln, nn, pn, ds, in;

	if (this->count == 8)
		this->count = 0;
	do
	{
		std::cout << "\nFirst name: ";
		getline(std::cin, fn);
		std::cout << "Last name: ";
		getline(std::cin, ln);
		std::cout << "Nick name: ";
		getline(std::cin, nn);
		std::cout << "Phone number: ";
		getline(std::cin, pn);
		std::cout << "Darkest secret: ";
		getline(std::cin, ds);
		if (!fn.empty() && !ln.empty() && !nn.empty() && !pn.empty() && !ds.empty())
		{

			this->contactArray[this->count].setFirstName(fn);
			this->contactArray[this->count].setLastName(ln);
			this->contactArray[this->count].setNickName(nn);
			this->contactArray[this->count].setPhoneNumber(pn);
			this->contactArray[this->count].setDarkestSecret(ds);
		}
		else
		{
			std::cout << "All fields are required!" << std::endl;
			return ;
		}
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

// Print contact list
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


// Print contact list by index
void	PhoneBook::printContactList(std::string index)
{
	int	idx = stringToInt(index);
	headerMenu();
	std::cout << this->contactArray[idx].getFirstName() << " | ";
	std::cout << this->contactArray[idx].getLastName() << " | ";
	std::cout << this->contactArray[idx].getNickName() << " | ";
	std::cout << this->contactArray[idx].getPhoneNumber() << std::endl;
}

// Search contact
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
