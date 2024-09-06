/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:36:58 by castorga          #+#    #+#             */
/*   Updated: 2024/09/06 16:37:01 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
	Zombie *instance1 = zombieHorde(10, "estudiante de 42");
	instance1->announce();
	
	delete(instance1);

	return(0);
}
