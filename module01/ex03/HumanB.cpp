/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:08:23 by castorga          #+#    #+#             */
/*   Updated: 2024/09/09 18:08:25 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>
HumanB::HumanB(std::string name) : _name(name)
{
	this->_name = name;

}

void	HumanB::attack()
{
    if (_name)
        std::cout << _name << " attacks with their " << this. << std::endl;
    else
        std::cout << _name << "is unarmed." << std::endl;}
void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}
