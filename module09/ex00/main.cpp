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
	if (argc != 2 || !argv[1])//si el numero de argumentos es diferente de 2 o el segundo argumento es nulo
	{
		std::cerr << "Error: Invalid number of arguments" << std::endl;
		std::cerr << "Usage: ./btc resourses/input.txt" << std::endl;
		return (1);
	}
    std::ifstream inputFile(argv[1]);
    if (!inputFile) // Si el archivo no se puede abrir
    {
        std::cerr << "Error: Could not open input file: " << argv[1] << std::endl;
        return 1;
    }

    // Verificar si el archivo está vacío
    inputFile.seekg(0, std::ios::end);
    if (inputFile.tellg() == 0) // Si el archivo tiene tamaño 0, está vacío
    {
        std::cerr << "Error: Input file is empty" << std::endl;
        return 1;
    }

    inputFile.close(); // Cerrar el archivo después de la verificación

	BitcoinExchange exchange("./resources/data.csv");//crear un objeto de la clase BitcoinExchange

	if (!exchange.loadDatabase())//si no se pudo cargar la base de datos
		{
			std::cerr << "Error: Could not load database" << std::endl;
			return (1);
		}
	exchange.processInputFile(argv[1]);//procesar el archivo de entrada
	return (0);
}
