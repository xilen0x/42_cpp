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