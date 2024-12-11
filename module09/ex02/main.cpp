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
#include <ctime>

int main(int argc, char *argv[])
{
    std::vector<unsigned int>	myVector;
	std::deque<unsigned int>	myDeque;
    std::clock_t				startVector, endVector, startDeque, endDeque;
	double						durVector, durDeque;

	if (argc < 2)
	{
		std::cout << YELLOW << "\nEx. usage: ./PmergeMe 10 2 3 9 5" << RESET << std::endl;
		std::cout << std::endl;
		return (1);
	}
	if (!checkNumbers(argc, argv))
	{
		std::cout << BG_RED << "\nError: All arguments must be positives numbers" << RESET << std::endl;
		std::cout << std::endl;
		return (1);
	}
	myVector = saveInVector(argc, argv);
	myDeque = saveInDeque(argc, argv);

    std::cout << "Before: ";
    printVector(myVector);

	startVector = std::clock();
	mergeSort(myVector, 0, myVector.size() - 1);
    endVector = std::clock();
    durVector = static_cast<double>(endVector - startVector) / CLOCKS_PER_SEC;

	startDeque = std::clock();
	mergeSort(myDeque, 0, myDeque.size() - 1);
	endDeque = std::clock();
	durDeque = static_cast<double>(endDeque - startDeque) / CLOCKS_PER_SEC;

    std::cout << "After : ";
    printVector(myVector);
	std::cout << GREEN << "time to process a range of " << myVector.size() << " elements in a vector: " << durVector * 1000000 << " us" << RESET << std::endl;
	std::cout << GREEN << "time to process a range of " << myDeque.size() << " elements in a deque: " << durDeque * 1000000 << " us" << RESET << std::endl;
    return (0);
}
