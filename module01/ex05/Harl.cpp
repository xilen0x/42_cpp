/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:37:30 by castorga          #+#    #+#             */
/*   Updated: 2024/09/16 10:37:32 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

void Harl::debug()
{	
	std::cout << "DEBUG:" << "I love having extra bacon for my \
	7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{	
	std::cout << GREEN << "INFO:" << "I cannot believe adding extra bacon costs \
	more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t \
	be asking for more!" << RESET << std::endl;
}

void Harl::warning()
{	
	std::cout << YELLOW << "WARNING:" << "I think I deserve to have some extra bacon for free. \
	I’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
}

void Harl::error()
{	
	std::cout << RED << "ERROR:" << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*functions[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[] = { "debug", "info", "warning", "error" };

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*functions[i])();
            return;
        }
    }
    std::cout << "Invalid level" << std::endl;
}

Harl::~Harl(){}
