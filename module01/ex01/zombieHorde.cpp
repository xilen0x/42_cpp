/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:37:25 by castorga          #+#    #+#             */
/*   Updated: 2024/09/06 16:37:29 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"


//---  Constructors
Zombie::Zombie(){}

Zombie::Zombie(std::string name, int n)
{
	this->name = name;
	this->n = n;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *instanciaZ = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		instanciaZ[i].setName(name);
	}
	return (instanciaZ);
}