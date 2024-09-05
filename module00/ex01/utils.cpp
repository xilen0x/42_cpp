/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:21:03 by castorga          #+#    #+#             */
/*   Updated: 2024/09/03 12:21:06 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include "utils.hpp"

//funcion que valida si el numero de telefono cumple con el formato
int	validatePhoneNumber(std::string &pn)
{
	std::string				phone;
	std::string::iterator	it;
	int						count = 0;


	getline(std::cin, phone);
	if (std::cin.eof())
    	    exit(1);
	for (it = phone.begin(); it != phone.end(); it++)
	{
		if (isdigit(*it))
			count++;
	}
	if (count == 9)
	{
		pn = phone;
		return (1);
	}
	else
	{
		std::cout << "\n**** Invalid phone number! ****" << std::endl;
		return (0);
	}
}

// truncate string with dot
std::string truncateWithDot(const std::string& str, std::size_t maxWidth)
{
	if (str.length() > maxWidth)
		return (str.substr(0, maxWidth - 1) + ".");
	else
		return str;
}

// Print contact list
void	PhoneBook::printContactList(void)
{
	const int	colWidth = 10;
	headerMenu();
	for (int i = 0; i < count && i < 8; i++)
	{
		std::cout << std::setw(colWidth) << i << "|";
		std::cout << std::setw(colWidth) << truncateWithDot(this->contacts[i].getFirstName(), colWidth) << "|";
		std::cout << std::setw(colWidth) << truncateWithDot(this->contacts[i].getLastName(), colWidth) << "|";
		std::cout << std::setw(colWidth) << truncateWithDot(this->contacts[i].getNickName(), colWidth) << "|" << std::endl;
	}
}


// Print contact list by index
void	PhoneBook::printContactList(int idx)
{
	const int	colWidth = 10;
	std::cout << "\nFirst name: " << std::setw(colWidth) << truncateWithDot(this->contacts[idx].getFirstName(), colWidth) << std::endl;
	std::cout << "Last name: " << std::setw(colWidth) << truncateWithDot(this->contacts[idx].getLastName() , colWidth) << std::endl;
	std::cout << "Nick name: " << std::setw(colWidth) << truncateWithDot(this->contacts[idx].getNickName() , colWidth) << std::endl;
}

void	welcome(void)
{
	std::cout << "#######################################################\n";
	std::cout << "#                                                     #\n";
	std::cout << "#                 WELCOME TO PHONEBOOK                #\n";
	std::cout << "#                                                     #\n";
	std::cout << "#######################################################\n";
	std::cout << "#                                                     #\n";
	std::cout << "#                      castorga                       #\n";
	std::cout << "#                                                     #\n";
	std::cout << "#######################################################\n";
}

void	menu(void)
{
	std::cout << "\n -------------------------------------------------" << std::endl;
	std::cout << "\n Enter one option:\n" << std::endl;
	std::cout << "\n ADD" << std::endl;
	std::cout << "\n SEARCH" << std::endl;
	std::cout << "\n EXIT" << std::endl;
}

void	headerMenu(void)
{
	const int columnWidth = 10;
	// std::cout << std::setw(columnWidth) << "|---------------------------------|" << std::endl;
	std::cout << std::endl;
	std::cout << std::setw(columnWidth) << "INDEX" << "|";
	std::cout << std::setw(columnWidth) << "FIRSTNAME" << "|";
	std::cout << std::setw(columnWidth) << "LASTNAME" << "|";
	std::cout << std::setw(columnWidth) << "NICKNAME" << "|" << std::endl;
	// std::cout << "||----------|----------|----------|----------||" << std::endl;
}

//funcion que limpia la pantalla
void	clearScreen(void)
{
	std::cout << "\033[2J\033[1;1H";
}

int getArrayLength(int size) {
    return size;
}