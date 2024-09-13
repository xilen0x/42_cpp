/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:38:28 by castorga          #+#    #+#             */
/*   Updated: 2024/09/06 14:38:31 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

/** @brief Representa un zombie con un nombre y capacidad para hablar. */
class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string name);
		~Zombie();

		void announce(void);
};


#endif
