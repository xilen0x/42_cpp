/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:37:46 by castorga          #+#    #+#             */
/*   Updated: 2024/09/16 10:37:48 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(HARL_H)
#define HARL_H

#include <iostream>

#define RED "\033[91m"
#define RESET "\033[0m"
#define YELLOW "\033[93m"
#define GREEN "\033[92m"

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Harl();
		~Harl();

		void	complain(std::string level);
		
};

#endif
