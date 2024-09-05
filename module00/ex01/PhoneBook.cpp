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

// Constructor
PhoneBook::PhoneBook(){
	this->count = 0;}

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

// Search contact
void PhoneBook::searchContact(void) {
    std::string in;

	printContactList();
    if (this->count == 0) {
        clearScreen();
        std::cout << "\nPhonebook is empty!\n" << std::endl;
        return;
    } else {
        std::cout << "\nSelect an index(0 - 7): ";
        getline(std::cin, in);
        int index = -1;
        if (in.length() == 1 && in[0] >= '0' && in[0] <= '7') {
            index = in[0] - '0';
        }
        if (index >= 0 && index < 8 && index < this->count) {
            printContactList(index);
            return;
        } else {
            std::cout << "\n\n**** index not found! **** " << std::endl;
        }
    }
}

// Destructor
PhoneBook::~PhoneBook(){}
