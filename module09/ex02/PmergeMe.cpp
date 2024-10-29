/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:35:12 by castorga          #+#    #+#             */
/*   Updated: 2024/10/29 12:35:15 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstdlib>
#include <climits>

bool AllNumbers(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
				return (false);
		}
	}
	return (true);
}

bool AllNumbersPositives(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < 0)
			return (false);
	}
	return (true);
}
bool AllNumbersInRange(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > INT_MAX || atoi(argv[i]) < INT_MIN)
			return (false);
	}
	return (true);
}

bool checkNumbers(int argc, char *argv[])
{
	if (!AllNumbers(argc, argv))
		return (false);
	if (!AllNumbersPositives(argc, argv))
		return (false);
	if (!AllNumbersInRange(argc, argv))
		return (false);
	
	return (true);
}

std::vector<unsigned int> saveInVector(int argc, char *argv[])
{
	std::vector<unsigned int> tmpVector;

	for (int i = 1; i < argc; i++)
	{
		tmpVector.push_back(atoi(argv[i]));
	}
	return (tmpVector);
}
