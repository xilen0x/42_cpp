/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:37:57 by castorga          #+#    #+#             */
/*   Updated: 2024/09/06 14:38:01 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
	Zombie *heapZombie = newZombie("heapZombie");
	heapZombie->announce();
	delete(heapZombie);

	randomChump("stackZombie");
	return(0);
}
