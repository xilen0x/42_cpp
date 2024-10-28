/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:34:26 by castorga          #+#    #+#             */
/*   Updated: 2024/10/28 09:34:30 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>//ifstream
#include <sstream>//istringstream
#include <ctime>//time_t

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
	if (date.length() != 10)
		return (false);
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
		{
			if (date[i] != '-')
				return (false);
		}
		else if (date[i] < '0' || date[i] > '9')
			return (false);
	}
	return (true);
}

bool BitcoinExchange::isValidValue(const std::string& value) const
{
	if (value.length() == 0)
		return (false);
	for (std::string::size_type i = 0; i < value.length(); i++)
	{
		if (value[i] < '0' || value[i] > '9')
			return (false);
	}
	return (true);
}

float BitcoinExchange::findClosestPrice(const std::string& date) const 
{
    time_t targetTime = stringToTime(date);
    if (targetTime == -1) {
        displayError("Error: invalid date format => " + date);
        return 0.0f;
    }

    float closestPrice = 0;
    double minDiff = 1e9; // Un valor grande como límite inicial para la diferencia mínima

    for (std::map<std::string, float>::iterator it = _priceData.begin(); it != _priceData.end(); ++it) {
        time_t dataTime = stringToTime(it->first);
        if (dataTime == -1) continue;

        double diff = difftime(targetTime, dataTime);
        if (diff >= 0 && diff < minDiff) { // Solo fechas anteriores o iguales
            minDiff = diff;
            closestPrice = it->second;
        }
    }
    return closestPrice;
}


void BitcoinExchange::displayResult(const std::string& date, float value, float result) const
{
	std::cout << date << "," << value << "," << result << std::endl;
}

void BitcoinExchange::displayError(const std::string& message) const
{
	std::cerr << message << std::endl;
}

float BitcoinExchange::convertStringToFloat(const std::string& valueStr) const
{
    std::stringstream ss(valueStr);
    float value;
    ss >> value;
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

//*************************Public Member functions*************************//
bool BitcoinExchange::loadDatabase()
{
    std::string line;
	std::string date;
    float		price;

    std::ifstream file(_data.c_str());//abrir el archivo
    if (!file.is_open()) {
        displayError("Error: could not open database file.");
        return false;
    }
    while (std::getline(file, line))
	{
        std::istringstream ss(line);
        if (std::getline(ss, date, ',') && ss >> price) {
            _priceData[date] = price;
        }
    }
    file.close();
    return (true);
}

void BitcoinExchange::processInputFile(const std::string& inputFilename)
{
    std::string	line;
    float		value;
	float		price;

    std::ifstream file(inputFilename.c_str());
    if (!file.is_open()) {
        throw std::runtime_error("Error: could not open input file.");
    }
    while (std::getline(file, line))
	{
        std::istringstream ss(line);
        std::string date, valueStr;
        if (std::getline(ss, date, '|') && std::getline(ss, valueStr)) {
            if (!isValidDate(date) || !isValidValue(valueStr)) {
                displayError("Error: bad input => " + line);
                continue;
            }
            value = convertStringToFloat(valueStr);
            price = findClosestPrice(date);
            displayResult(date, value, value * price);
        } else {
            displayError("Error: bad input => " + line);
        }
    }
    file.close();
}
