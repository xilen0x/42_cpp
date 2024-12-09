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
    char c;
    float fValue;

    std::cout << "char: ";
    if (str.length() == 1 && !std::isdigit(str[0]))
    {
        c = str[0];
        if (std::isprint(c))
        {
            std::cout << "'" << c << "'" << std::endl;
        } else {
            std::cout << "Non displayable" << std::endl;
        }
    } else
    {
        errno = 0;
        fValue = std::strtof(str.c_str(), NULL);
        if (errno || fValue < CHAR_MIN || fValue > CHAR_MAX || !std::isdigit(str[0]))
        {
            std::cout << "impossible" << std::endl;
        } else {
            c = static_cast<char>(fValue);
            if (std::isprint(c))
            {
                std::cout << "'" << c << "'" << std::endl;
            } else {
                std::cout << "Non displayable" << std::endl;
            }
        }
    }
}
void convertToInt(const std::string& str) {
    long    lValue;
    double  dValue;
    char    *endPtr;

    std::cout << "int: ";
    errno = 0;
    // Verificar pseudo-literals
    if (str == "nan" || str == "-inf" || str == "+inf" || str == "nanf" || str == "-inff" || str == "+inff")
    {
        std::cout << "impossible" << std::endl;
        return;
    }
    // Detectar y manejar sufijo 'f' para valores flotantes
    std::string tempStr = str;
    if (!tempStr.empty() && tempStr[tempStr.length() - 1] == 'f')
        tempStr = tempStr.substr(0, tempStr.length() - 1);
    dValue = std::strtod(tempStr.c_str(), &endPtr);
    if (errno || endPtr == tempStr.c_str() || *endPtr != '\0' || dValue < INT_MIN || dValue > INT_MAX)
    {
        std::cout << "impossible" << std::endl;
    }
    else
    {
        lValue = static_cast<long>(dValue);
        std::cout << static_cast<int>(lValue) << std::endl;
    }
}

void convertToFloat(const std::string& str)
{
    float fValue;
    double dValue;
    char *endPtr;

    std::cout << "float: ";
    errno = 0;
    // Convertir a double primero para manejar entradas como "42.42" sin 'f'
    dValue = std::strtod(str.c_str(), &endPtr);
    // Manejar pseudo-literals
    if (strcmp(str.c_str(), "nan") == 0) 
    {
        std::cout << "nanf" << std::endl;
    } else if (strcmp(str.c_str(), "-inff") == 0 || strcmp(str.c_str(), "+inff") == 0)
    {
        std::cout << (strcmp(str.c_str(), "-inff") == 0 ? "-inff" : "+inff") << std::endl;
    } else if (errno || (endPtr == str.c_str() && *endPtr != 'n') || (*endPtr != '\0' && *endPtr != 'f'))
    {
        std::cout << "impossible" << std::endl;
    } else {
        fValue = static_cast<float>(dValue);
        std::cout << std::fixed << std::setprecision(1) << fValue << "f" << std::endl;
    }
}

void convertToDouble(const std::string& str)
{
    double dValue;
    char *endPtr;

    std::cout << "double: ";
    errno = 0;

    std::string tempStr = str;
    if (!tempStr.empty() && tempStr[tempStr.length() - 1] == 'f')
        tempStr = tempStr.substr(0, tempStr.length() - 1);

    dValue = std::strtod(tempStr.c_str(), &endPtr);

    if (errno || endPtr == tempStr.c_str() || *endPtr != '\0')
    {
        std::cout << "impossible" << std::endl;
    }
    else
    {
        dValue = static_cast<double>(dValue);
        std::cout << std::fixed << std::setprecision(1) << dValue << std::endl;
    }
}
