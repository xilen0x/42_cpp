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

/*------------------Constructors------------------*/
HumanB::HumanB(){}

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
}

/*------------------Methods------------------*/
void	HumanB::attack()
{
    if (this->_weapon != NULL)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << _name << " is unarmed." << std::endl;
}

/*------------------Setter------------------*/
void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

/*------------------Destructor------------------*/
HumanB::~HumanB(){}
