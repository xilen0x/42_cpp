/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:42:36 by castorga          #+#    #+#             */
/*   Updated: 2024/09/16 10:42:39 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"
# include <algorithm>//transform

Harl::Harl(){}

void Harl::debug()
{	
	std::cout << "[ DEBUG ]" << std:: endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle\
	 -special-ketchup burger. I really do!" << std::endl;
	std::cout << "\n";
	Harl::complain("info");	
}

void Harl::info()
{	
	std::cout <<  GREEN << "[ INFO ]" << std:: endl;
	std::cout << "I cannot believe adding extra bacon costs more money. \
	You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
	std::cout << "\n";
	Harl::complain("warning");	
}

void Harl::warning()
{	
	std::cout << YELLOW << "[ WARNING ]" << std:: endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been \
	coming for years whereas you started working here since last month." << RESET << std::endl;
	std::cout << "\n";
	Harl::complain("error");
}

void Harl::error()
{	
	std::cout << RED << "[ ERROR ]" << std:: endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

// Función libre para convertir un carácter a minúsculas
char toLowerChar(char c) {
    return std::tolower(static_cast<unsigned char>(c));
}

void Harl::complain(std::string level)
{
    void (Harl::*functions[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[] = { "debug", "info", "warning", "error" };
    std::transform(level.begin(), level.end(), level.begin(), toLowerChar);
    bool found = false;
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*functions[i])();
            found = true;
            break;
        }
    }

    if (!found)
    {
        std::cout << "Invalid level\n";
    }
}

Harl::~Harl(){}