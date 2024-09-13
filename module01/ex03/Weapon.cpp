/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:07:30 by castorga          #+#    #+#             */
/*   Updated: 2024/09/09 18:07:32 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*------------------Constructors------------------*/
Weapon::Weapon(){}

Weapon::Weapon(std::string type)
{
	setType(type);
}

/*------------------Getter------------------*/
const std::string&	Weapon::getType() const
{
	return (this->_type);
}

/*------------------Setter------------------*/
void	Weapon::setType(std::string type)
{
    this->_type = type;
}

/*------------------Destructor------------------*/
Weapon::~Weapon(){}
