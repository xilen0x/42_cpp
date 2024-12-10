/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@42.fr>                    +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:34:26 by castorga          #+#    #+#             */
/*   Updated: 2024/10/28 09:34:30 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>//ifstream
#include <sstream>//istringstream
#include <ctime>//time_t
#include <cstdlib> // Para atoi

/*************************Cannonical form*************************/
//Default constructor
BitcoinExchange::BitcoinExchange(){}

//Constructor with parameters
BitcoinExchange::BitcoinExchange(const std::string &data) {
	_data = data;
}

//Copy constructor
BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy){
	*this = copy;
}

//Overloaded assignment operator
BitcoinExchange &BitcoinExchange::operator = (const BitcoinExchange &obj)
{
	if (this == &obj)
		return (*this);
	_data = obj._data;
	_priceData = obj._priceData;
	return (*this);
}

//Destructor
BitcoinExchange::~BitcoinExchange(){}

//*************************Private member functions*************************//

bool BitcoinExchange::isValidDate(const std::string& date) const
{
	int year, month, day;
    std::tm timeInfo;

    // Comprobar que la fecha tiene el formato correcto y la longitud esperada
    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
        return (false);

    // Convertir la cadena de fecha a enteros para día, mes y año
    year = std::atoi(date.substr(0, 4).c_str());//convertir los primeros 4 caracteres a entero
    month = std::atoi(date.substr(5, 2).c_str());//convertir los caracteres 5 y 6 a entero
    day = std::atoi(date.substr(8, 2).c_str());//convertir los caracteres 8 y 9 a entero

    // Rellenar una estructura tm con los valores de fecha
    timeInfo.tm_year = year - 1900;  // tm_year cuenta años desde 1900
    timeInfo.tm_mon = month - 1;     // tm_mon va de 0 a 11
    timeInfo.tm_mday = day;//día del mes

	return (std::mktime(&timeInfo) != -1);//devuelve true si la fecha es válida
}


bool BitcoinExchange::isValidValue(const std::string& valueStr) const
{
	float	value;

    if (valueStr.empty())
        return (false);
    value = convertStringToFloat(valueStr);
    if (value <= 0) {
        displayError("Error: not a positive number.");
        return (false);
    }
    // Comprobar si el número es mayor que el límite permitido
    if (value >= 2147483648)
    {
        displayError("Error: too large a number.");
        return (false);
    }
    return (true);
}

float BitcoinExchange::findClosestPrice(const std::string& date) const 
{
    time_t targetTime = stringToTime(date);//convertir la fecha a time_t
    if (targetTime == -1)//si la fecha no es válida
    {
        displayError("Error: invalid date format => " + date);
        return (0.0f);
    }
    float closestPrice = 0;
    double minDiff = 1e9; // Un valor grande como límite inicial para la diferencia mínima
    
    for (std::map<std::string, float>::const_iterator it = _priceData.begin(); it != _priceData.end(); ++it)
    {
        time_t dataTime = stringToTime(it->first);
        if (dataTime == -1) 
            continue;
        double diff = difftime(targetTime, dataTime);
        if (diff >= 0 && diff < minDiff) { // Solo fechas anteriores o iguales
            minDiff = diff;
            closestPrice = it->second;
        }
    }
    return (closestPrice);
}


void BitcoinExchange::displayResult(const std::string& date, float value, float result) const
{
	std::cout << date << " => " << value << " = " << result << std::endl;
}

void BitcoinExchange::displayError(const std::string& message) const
{
	std::cerr << message << std::endl;
}

float BitcoinExchange::convertStringToFloat(const std::string& valueStr) const
{
    std::stringstream ss(valueStr);//convertir la cadena a un stream
    float value;//variable para almacenar el valor
    ss >> value;//almacenar el valor en la variable
    return value;
}

time_t BitcoinExchange::stringToTime(const std::string& date) const
{
    struct tm tm = {};
    if (sscanf(date.c_str(), "%d-%d-%d", &tm.tm_year, &tm.tm_mon, &tm.tm_mday) != 3) {
        return -1; // Indicador de error si la fecha no es válida
    }
    tm.tm_year -= 1900; // Ajustar año desde 1900
    tm.tm_mon -= 1;     // Ajustar mes a 0-11
    return mktime(&tm);
}

//**************************Public Member functions**************************//

/*Esta función intenta abrir un archivo, lo lee línea por línea, extrae datos 
en formato fecha,precio, y almacena estos pares en el mapa _priceData.*/
bool BitcoinExchange::loadDatabase()
{
    std::string line;
	std::string date;
    float		price;

    std::ifstream file(_data.c_str());//abrir el archivo
    if (!file.is_open()) {
        displayError("Error: could not open database file.");
        return (false);
    }
    while (std::getline(file, line))
	{
        std::istringstream ss(line);
        if (std::getline(ss, date, ',') && ss >> price)//si se pudo leer la fecha y el precio
		{
			// printf("date: %s, price: %f\n", date.c_str(), price);
            _priceData[date] = price;
        }
    }
    file.close();
    return (true);
}
/*Abre un archivo, procesa cada línea para obtener la 
fecha y la cantidad de bitcoin, valida estos valores, y calcula el valor en 
función del precio más cercano de bitcoin para cada fecha.*/
void BitcoinExchange::processInputFile(const std::string& inputFile)
{
    std::string	line;
    std::string date;
	std::string valueStr;
    float		value;
	float		price;

    std::ifstream file(inputFile.c_str());
    if (!file.is_open()) {
        throw std::runtime_error("Error: could not open input file.");
    }
	std::getline(file, line);//saltar la primera línea
    while (std::getline(file, line))
    {
        std::istringstream ss(line);
        if (std::getline(ss, date, '|') && std::getline(ss, valueStr))
        {
            // Eliminar espacios alrededor de 'date' y 'valueStr'
            date.erase(date.find_last_not_of(" \t\n\r\f\v") + 1);//borrar los espacios al final de la cadena
            valueStr.erase(0, valueStr.find_first_not_of(" \t\n\r\f\v"));//borrar los espacios al inicio de la cadena
            valueStr.erase(valueStr.find_last_not_of(" \t\n\r\f\v") + 1);//borrar los espacios al final de la cadena

            if (!isValidDate(date) || !isValidValue(valueStr))
                continue;
            
            value = convertStringToFloat(valueStr);
            price = findClosestPrice(date);
            displayResult(date, value, value * price);
        }
        else {
            displayError("Error: bad input => " + line);
        }
    }
    file.close();
}
