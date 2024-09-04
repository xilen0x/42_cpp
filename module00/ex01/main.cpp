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


int main(void)
{
	std::string	option;
	PhoneBook	pbook1;

	welcome();
	do
	{
		menu();
		std::cout << "\n:"; getline(std::cin, option);
		if (std::cin.eof())
            exit(1);
		if (option == "1" || option == "ADD" || option == "add")
			pbook1.addContact();
		else if (option == "2" || option == "SEARCH" || option == "search")
			pbook1.searchContact();
		else if	(option == "3" || option == "exit" || option == "EXIT")
		{
			std::cout << "\nGoodbye!\n" << std::endl;
			return (0);
		}
		else
		{
			std::cout << "\nOpcion incorrecta!\n" << std::endl;
			continue;
		}
	} while (!(option == "3" || option == "exit" || option == "EXIT"));
	return (0);
}
