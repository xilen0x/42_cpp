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
#include "utils.hpp"

//funcion que valida si el numero de telefono cumple con el formato
int	validatePhoneNumber(std::string &pn)
{
	std::string				phone;
	std::string::iterator	it;
	int						count = 0;


	std::getline(std::cin, phone);
	for (it = phone.begin(); it != phone.end(); it++)
	{
		if (std::isdigit(*it))
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

// Add contact
void	PhoneBook::addContact(void)
{
	std::string	fn, ln, nn, pn, ds, in;

	do
	{
		std::cout << "\nFirst name: ";
		getline(std::cin, fn);
		if (std::cin.eof())
    	    exit(1);
		std::cout << "Last name: ";
		getline(std::cin, ln);
		if (std::cin.eof())
    	    exit(1);
		std::cout << "Nick name: ";
		getline(std::cin, nn);
		if (std::cin.eof())
    	    exit(1);
		std::cout << "Phone number(9 digits): ";
		if (validatePhoneNumber(pn) == 0)
			return ;
		std::cout << "Darkest secret: ";
		getline(std::cin, ds);
		if (std::cin.eof())
    	    exit(1);
		if (!fn.empty() && !ln.empty() && !nn.empty() && !pn.empty() && !ds.empty())
		{
			this->contacts[count % 8] = Contact(fn, ln, nn, pn, ds);
			count++;
		}
		else
		{
			std::cout << "\n**** All fields are required! ****" << std::endl;
			return ;
		}
		std::cout << "\nDo you want to add another contact? (y/n): ";
		getline(std::cin, in);
		if (std::cin.eof())
    	    exit(1);
		if (in == "n" || in == "N")
			break;
		printContactList();
	} while (in == "y" || in == "Y");
	printContactList();
}

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
	int			arrayLength = sizeof(this->contacts) / sizeof(this->contacts[0]);
	const int	colWidth = 10;
	headerMenu();
	for (int i = 0; i < getArrayLength(arrayLength); i++)
	{
		std::cout << std::setw(colWidth) << i << "|";
		std::cout << std::setw(colWidth) << truncateWithDot(this->contacts[i].getFirstName(), colWidth) << "|";
		std::cout << std::setw(colWidth) << truncateWithDot(this->contacts[i].getLastName() , colWidth) << "|";
		std::cout << std::setw(colWidth) << truncateWithDot(this->contacts[i].getNickName() , colWidth) << "|" << std::endl;
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

void PhoneBook::searchContact(void) {
    std::string in;

    if (this->count == 0) {
        clearScreen();
        std::cout << "\nPhonebook is empty!\n" << std::endl;
        return;
    } else {
        std::cout << "\nSelect an index(0 - 7): ";
        std::getline(std::cin, in);
        int index = -1;
        if (in.length() == 1 && in[0] >= '0' && in[0] <= '7') {
            index = in[0] - '0';
        }
        if (index >= 0 && index < 8 && index < this->count) {
            printContactList(index);
            return;
        } else {
            std::cout << "Invalid index" << std::endl;
        }
    }
}

// Constructor
PhoneBook::PhoneBook()
{
	this->count = 0;
}

// Destructor
PhoneBook::~PhoneBook(){}
