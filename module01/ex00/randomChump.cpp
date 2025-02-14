/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:38:09 by castorga          #+#    #+#             */
/*   Updated: 2024/09/06 14:38:14 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*Crea un Zombie con el nombre dado y llama a su método `announce`.*/
void	randomChump(std::string name)
{
	Zombie instanceX(name);
	instanceX.announce();
}
