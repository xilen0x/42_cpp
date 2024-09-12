/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:23:53 by castorga          #+#    #+#             */
/*   Updated: 2024/09/11 15:23:55 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "main.hpp"

void replaceText(std::string& file, std::string& s1, std::string& s2) 
{
	std::string line;
	bool found = false;
	
    std::ifstream inputFile(file.c_str());
    // if (!inputFile)
	// {
    //     std::cerr << "Error: Open file doesn't exist" << file << std::endl;
    //     return;
    // }
	std::ofstream outputFile((file + ".replace").c_str());
    // if (!outputFile)
	// {
    //     std::cerr << "Error: Unable to create output file " << file + ".replace" << std::endl;
    //     return;
    // }
    while (std::getline(inputFile, line))
	{
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			found = true;
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        outputFile << line << std::endl;
    }
	if (found)
		std::cout << "Text was replaced in a new file: " << file + ".replace" << std::endl;
	else
		std::cout << "Text was not found in the file" << std::endl;
}
