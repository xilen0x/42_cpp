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
// #include <cctype>

int main(int ac, char *av[])
{

	x
    std::string msg;
    std::string fullMsg;
    size_t		j;
	int			i;

    if (ac > 1)
    {
        for (i = 1; i < ac; i++)
        {
            msg = av[i];
            for (j = 0; j < msg.size(); j++)
            {
                fullMsg += std::toupper(msg[j]);
            }
            fullMsg += " ";
        }
        std::cout << fullMsg << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;    
    return 0;
}
