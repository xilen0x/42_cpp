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

/**
 * @brief Constructor de la clase Zombie.
 * @param name El nombre del zombie.
 */
Zombie::Zombie(std::string name)
{
	this->name = name;
}
	
/** @brief Método que imprime un mensaje de anuncio del Zombie. */
void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/**
 * @brief Destructor de la clase Zombie.
 * Imprime un mensaje indicando que el Zombie ha muerto.
 */
Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " is dead" << std::endl;
}
