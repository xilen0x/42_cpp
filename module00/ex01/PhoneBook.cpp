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
#include <iostream>

void	PhoneBook::addContact(void)
{
	std::string	in;

	std::cout << "First name: ";
	getline(std::cin, in);
	if (this->count < 8)
	{
		this->contactArray[this->count].setFirstName(in);
	}
	else
	{
		this->count = 0;
		this->contactArray[this->count].setFirstName(in);
	}
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

