/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:29:41 by castorga          #+#    #+#             */
/*   Updated: 2024/10/02 16:29:43 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		//Default constructor
		WrongCat();

		//Copy constructor
		WrongCat(const WrongCat &copy);

		//Assignment operator
		WrongCat &operator = (const WrongCat &copy);

		//Member function
		void makeSound() const;

		//Destructor
		~WrongCat();
};
