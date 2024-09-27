/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:37:15 by castorga          #+#    #+#             */
/*   Updated: 2024/09/06 16:37:17 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

//---  Constructors
Zombie::Zombie(){}

Zombie::Zombie(std::string name, int n)
{
	this->name = name;
	this->n = n;
}

/** @brief Método que imprime un mensaje de anuncio del Zombie. */
void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//--- Setters
void	Zombie::setName(std::string name)
{
	this->name = name;
}

//--- Destructor
Zombie::~Zombie(){}
