/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:08:06 by castorga          #+#    #+#             */
/*   Updated: 2024/09/09 18:08:08 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	this->_name = name;
	this->_weapon = weapon;	
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
HumanA::~HumanA(){}