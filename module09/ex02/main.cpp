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

#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
    std::vector<unsigned int> myVector;
    
	if (argc < 2)
	{
		std::cout << "Usage: ./PmergeMe [int1] [int2] [int3] ... [intN]" << std::endl;
		return (1);
	}
	if (!checkNumbers(argc, argv))
	{
		std::cout << "Error: All arguments must be numbers" << std::endl;
		return (1);
	}
	
	// myVector = saveInVector(argc, argv);
    // std::cout << "Arreglo original: " << std::endl;
    // printVector(arr);
    
    
    
    // std::cout << "Arreglo ordenado: " << std::endl;
    // printVector(arr);
    
    return (0);
}

