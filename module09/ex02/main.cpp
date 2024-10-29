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
    std::clock_t				start;
	std::clock_t				end;
	double						duration;

	if (argc < 2)
	{
		std::cout << YELLOW << "\nEx. usage: ./PmergeMe 1 2 3 4 5" << RESET << std::endl;
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
    std::cout << "Before: ";
    printVector(myVector);
	start = clock();
	mergeSort(myVector, 0, myVector.size() - 1);
    end = clock();
    duration = (std::clock() - start) / (double) CLOCKS_PER_SEC;
    std::cout << "After : ";
    printVector(myVector);
    std::cout << "Duration: " << duration << " seconds" << std::endl;
    return (0);
}

