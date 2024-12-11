/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@42.fr>                    +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:34:35 by castorga          #+#    #+#             */
/*   Updated: 2024/10/28 09:34:37 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <map>

class BitcoinExchange
{
	private:
		std::string 					_data;
		std::map<std::string, float>	_priceData;

		// Private member functions
		bool isValidDate(const std::string& date) const;
		bool isValidValue(const std::string& value) const;
		float findClosestPrice(const std::string& date) const;
		void displayResult(const std::string& date, float value, float result) const;
		void displayError(const std::string& message) const;
		float convertStringToFloat(const std::string& valueStr) const;
		time_t stringToTime(const std::string& date) const;

	public:
		// Cannonical form
		BitcoinExchange();
		BitcoinExchange(const std::string& data);
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange& operator=(const BitcoinExchange &obj);
		~BitcoinExchange();

		// Public member functions
		bool loadDatabase();
		void processInputFile(const std::string& inputFilename);
};
