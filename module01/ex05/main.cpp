/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:37:58 by castorga          #+#    #+#             */
/*   Updated: 2024/09/16 10:38:00 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl	instance;

	instance.complain("debug");
	std::cout << std::endl;
	instance.complain("info");
	std::cout << std::endl;
	instance.complain("warning");
	std::cout << std::endl;
	instance.complain("error");
	return (0);
}
