/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:36:16 by castorga          #+#    #+#             */
/*   Updated: 2024/10/22 17:36:18 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream> // Para std::cout, std::endl
#include <string>  // Para std::string
#include <cstdlib>  // Para strtol, strtof, strtod
#include <climits>   // Para los límites de los tipos
#include <cerrno>   // Para manejo de errores de conversión

class ScalarConverter
{
private:
	
	ScalarConverter();
	ScalarConverter(const ScalarConverter &copy);
	ScalarConverter &operator=(const ScalarConverter &copy);
	~ScalarConverter();

public:
	static void convert(std::string str);//puede ser llamado directamente, no es necesario crear un objeto de la clase para acceder a este metodo
};

void convertToChar(const std::string& str);
void convertToInt(const std::string& str);
void convertToFloat(const std::string& str);
void convertToDouble(const std::string& str);
