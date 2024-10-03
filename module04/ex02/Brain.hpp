/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:40:25 by castorga          #+#    #+#             */
/*   Updated: 2024/10/02 17:40:31 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

class Brain
{
	private:
		std::string _ideas[100];	

	public:
		//Default constructor
		Brain();

		//Copy constructor
		Brain(const Brain &copy);

		//Assignment operator
		Brain &operator=(const Brain &copy);

		//Destructor
		~Brain();
};
