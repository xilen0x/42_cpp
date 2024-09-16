/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:38:18 by castorga          #+#    #+#             */
/*   Updated: 2024/09/06 14:38:20 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

/* Constructor de la clase Zombie. */
Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
	this->name = name;
}
	
/* Método que imprime un mensaje de anuncio del Zombie. */
void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/*Destructor de la clase Zombie.*/
Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " is dead" << std::endl;
}
