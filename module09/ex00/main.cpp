/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@42.fr>                    +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:51:24 by castorga          #+#    #+#             */
/*   Updated: 2024/10/15 12:51:26 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: Invalid number of arguments" << std::endl;
		std::cerr << "Usage: ./btc resourses/input.txt" << std::endl;
		return (1);
	}

	BitcoinExchange exchange("./resources/data.csv");//crear un objeto de la clase BitcoinExchange

	if (!exchange.loadDatabase())//si no se pudo cargar la base de datos
		return (1);
	exchange.processInputFile(argv[1]);//procesar el archivo de entrada
	return (0);
}
