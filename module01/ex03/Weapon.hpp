/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:07:13 by castorga          #+#    #+#             */
/*   Updated: 2024/09/09 18:07:16 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{
	private:
		std::string	_type;

	public:
		Weapon();
		Weapon(std::string);
		~Weapon();
		const std::string&	getType() const;
		void				setType(std::string);
		
};

#endif