/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:51:24 by castorga          #+#    #+#             */
/*   Updated: 2024/10/15 12:51:26 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	int result;

	if (argc != 2)
	{
		std::cerr << "Error: Invalid number of arguments" << std::endl;
		std::cerr << "Usage example: ./rpn \"5 6 + " << std::endl;
		return (1);
	}
	if (!isValidExpression(argv[1]))
		throw InvalidExpression();
	try
	{
		result = calculateRPN(argv[1]);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
		return (1);
	}
	return (0);
}
