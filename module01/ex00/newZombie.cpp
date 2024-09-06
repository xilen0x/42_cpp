/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:38:03 by castorga          #+#    #+#             */
/*   Updated: 2024/09/06 14:38:07 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Crea un nuevo objeto Zombie en el heap.
 *
 * Asigna dinámicamente un nuevo objeto Zombie con el nombre proporcionado y lo devuelve.
 *
 * @param name El nombre del nuevo Zombie.
 * @return Un puntero al nuevo objeto Zombie.
 */
Zombie* newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}
