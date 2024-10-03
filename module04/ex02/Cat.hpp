/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:11:28 by castorga          #+#    #+#             */
/*   Updated: 2024/10/02 13:11:30 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public AAnimal
{
	private:
		Brain *_brain;

	public:
		//default constructor
		Cat();

		//copy constructor
		Cat(const Cat &obj);

		//assignment operator
		Cat& operator=(const Cat &obj);

		//destructor
		~Cat();

		//member function
		virtual void makeSound() const;
};
