/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:08:05 by castorga          #+#    #+#             */
/*   Updated: 2024/10/02 13:08:07 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		~Animal();
};
