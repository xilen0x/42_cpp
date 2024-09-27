/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:07:54 by castorga          #+#    #+#             */
/*   Updated: 2024/09/09 18:07:56 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name; //representa el nombre del humano
		Weapon		&_weapon;//referencia a la clase Weapon
		
	public:
		HumanA(std::string, Weapon&);
		~HumanA();
		void	attack();
};

#endif