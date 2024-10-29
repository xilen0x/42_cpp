/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:35:20 by castorga          #+#    #+#             */
/*   Updated: 2024/10/29 12:35:22 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#define RESET		"\033[0m"
#define RED			"\033[31m"				/* Red */
#define GREEN		"\033[32m"				/* Green */
#define YELLOW		"\033[33m"				/* Yellow */
#define BLUE		"\033[34m"	
#define BG_RED		"\033[41m"				/* Red */
#define BG_GREEN	"\033[42m"				/* Green */
#define BG_ORANGE	"\033[43m"				/* Yellow */

#include <vector>
#include <iostream>

template<typename T>
void printVector(const std::vector<T>& vec) {
    for (typename std::vector<T>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << BG_GREEN << *it << " " << RESET;
    }
    std::cout << std::endl;
}

bool checkNumbers(int argc, char *argv[]);
std::vector<unsigned int> saveInVector(int argc, char *argv[]);
