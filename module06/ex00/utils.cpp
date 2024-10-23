/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:29:37 by castorga          #+#    #+#             */
/*   Updated: 2024/10/23 11:29:38 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cmath>
#include <iomanip> 
#include <cstring>


void convertToChar(const std::string& str)
{
    std::cout << "char: ";
    char c;

    if (str.length() == 1 && !isdigit(str[0])) {
        c = str[0];
        if (isprint(c)) {
            std::cout << "'" << c << "'" << std::endl;
        } else {
            std::cout << "Non displayable" << std::endl;
        }
    } else {
        errno = 0;
        float fValue = std::strtof(str.c_str(), NULL);
        if (errno || fValue < CHAR_MIN || fValue > CHAR_MAX || !isdigit(str[0])) {
            std::cout << "impossible" << std::endl;
        } else {
            c = static_cast<char>(fValue);
            if (isprint(c)) {
                std::cout << "'" << c << "'" << std::endl;
            } else {
                std::cout << "Non displayable" << std::endl;
            }
        }
    }
}

void convertToInt(const std::string& str)
{
	long lValue;
	char *endPtr;

    std::cout << "int: ";
    errno = 0;
    lValue = std::strtol(str.c_str(), &endPtr, 10);
    if (endPtr == str.c_str() || errno || lValue < INT_MIN || lValue > INT_MAX) {
        std::cout << "impossible" << std::endl;
    } else {
        std::cout << static_cast<int>(lValue) << std::endl;
    }
}

void convertToFloat(const std::string& str)
{
    float fValue;
    char *endPtr;

    std::cout << "float: ";
    errno = 0;
    fValue = std::strtof(str.c_str(), &endPtr);
    if (errno || (endPtr == str.c_str() && *endPtr != 'n') || (*endPtr != '\0' && *endPtr != 'f')) {
        std::cout << "impossible" << std::endl;
    } else if (strcmp(str.c_str(), "nan") == 0) {
        std::cout << "nanf" << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(1) << fValue << "f" << std::endl;    }
}

void convertToDouble(const std::string& str)
{
	double dValue;
	char *endPtr;

    std::cout << "double: ";
    errno = 0;
    dValue = std::strtod(str.c_str(), &endPtr);
	if (errno || (endPtr == str.c_str() && *endPtr != 'n') || (*endPtr != '\0' && *endPtr != 'f')) {
		std::cout << "impossible" << std::endl;
	} else if (strcmp(str.c_str(), "nan") == 0) {
		std::cout << "nan" << std::endl;
	} else {
        std::cout << std::fixed << std::setprecision(1) << dValue << std::endl;	}
}