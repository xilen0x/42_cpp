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

bool checkIfAllNumbers(int argc, char *argv[])
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

bool checkNumbers(int argc, char *argv[])
{
	if (!checkIfAllNumbers(argc, argv))
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
