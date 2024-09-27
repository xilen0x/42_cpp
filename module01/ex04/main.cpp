/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:24:10 by castorga          #+#    #+#             */
/*   Updated: 2024/09/11 15:24:13 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define RED "\033[91m"
#define RESET "\033[0m"

void replaceText(std::string& filename, std::string& s1, std::string& s2);

int main(int ac, char *av[])
{
    if (ac != 4)
	{
		std::cout << RED << "Invalid parameters!" << RESET << std::endl;
        std::cerr << av[0] << "<filename> <string1> <string2>" << std::endl;
        return (1);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    replaceText(filename, s1, s2);
    return (0);
}
