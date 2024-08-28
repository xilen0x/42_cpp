/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:16:50 by castorga          #+#    #+#             */
/*   Updated: 2024/08/28 17:16:54 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

std::string convertToUp(const std::string& message)
{
    std::string result = message;
    for (char& c : result)
	{
        c = std::toupper(c);
    }
    return (result);
}

int main(int argc, char *argv[])
{
    if (argc > 1) {
        std::string fullMessage;
        for (int i = 1; i < argc; ++i)
		{
            std::string message = argv[i];
            std::string result = convertToUp(message);
            fullMessage += result;
            if (i < argc - 1)
			{
                fullMessage += " ";
            }
        }
        std::cout << fullMessage << std::endl;
    }
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}
