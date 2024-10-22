/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:36:22 by castorga          #+#    #+#             */
/*   Updated: 2024/10/22 17:36:24 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <string>

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	(void)copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
	(void)copy;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}

void ScalarConverter::convert(std::string str)
{
    char *endPtr;

    // Conversión a char
    std::cout << "char: ";
    errno = 0; // Limpiar errores previos
    long int charValue = std::strtol(str.c_str(), &endPtr, 10); // Convertir a long primero
    if (errno != 0 || *endPtr != '\0' || charValue < std::numeric_limits<char>::min() || charValue > std::numeric_limits<char>::max())
    {
        std::cout << "impossible" << std::endl;
    }
    else if (!std::isprint(static_cast<char>(charValue)))
    {
        std::cout << "Non displayable" << std::endl;
    }
    else
    {
        std::cout << "'" << static_cast<char>(charValue) << "'" << std::endl;
    }

    // Conversión a int
    std::cout << "int: ";
    errno = 0; // Limpiar errores previos
    long int intValue = std::strtol(str.c_str(), &endPtr, 10);
    if (errno != 0 || *endPtr != '\0' || intValue < std::numeric_limits<int>::min() || intValue > std::numeric_limits<int>::max())
    {
        std::cout << "impossible" << std::endl;
    }
    else
    {
        std::cout << static_cast<int>(intValue) << std::endl;
    }

    // Conversión a float
    std::cout << "float: ";
    errno = 0; // Limpiar errores previos
    float floatValue = std::strtof(str.c_str(), &endPtr);
    if (errno != 0 || *endPtr != '\0')
    {
        std::cout << "impossible" << std::endl;
    }
    else
    {
        std::cout << floatValue << "f" << std::endl;
    }

    // Conversión a double
    std::cout << "double: ";
    errno = 0; // Limpiar errores previos
    double doubleValue = std::strtod(str.c_str(), &endPtr);
    if (errno != 0 || *endPtr != '\0')
    {
        std::cout << "impossible" << std::endl;
    }
    else
    {
        std::cout << doubleValue << std::endl;
    }
}
