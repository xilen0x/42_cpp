/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:51:24 by castorga          #+#    #+#             */
/*   Updated: 2024/10/15 12:51:26 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	int result;

    if (argc != 2) {
        std::cerr << "Error: Invalid number of arguments" << std::endl;
        std::cerr << "Usage example: ./RPN \"5 6 +\"" << std::endl;
        return (1);
    }
    try
	{
        if (std::string(argv[1]).empty()) {
            throw std::invalid_argument("Error: Invalid input");
        }
        if (!isValidExpression(argv[1])) {
            throw InvalidExpression();
        }
		result = calculateRPN(argv[1]);
        std::cout << result << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return (1);
    }

    return (0);
}
