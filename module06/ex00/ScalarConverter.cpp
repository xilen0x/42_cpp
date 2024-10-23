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

// Constructor por defecto
ScalarConverter::ScalarConverter(){
}

// Constructor de copia
ScalarConverter::ScalarConverter(const ScalarConverter &copy){
	(void)copy;
}

// Operador de asignación
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy){
	(void)copy;
	return (*this);
}

// Destructor
ScalarConverter::~ScalarConverter(){
}

// Método para convertir un string a char, int, float y double
void ScalarConverter::convert(std::string str)
{
    convertToChar(str);
    convertToInt(str);
    convertToFloat(str);
    convertToDouble(str);
}
