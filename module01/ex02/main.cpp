/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:00:09 by castorga          #+#    #+#             */
/*   Updated: 2024/09/09 18:00:11 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    // direcciones de memoria
    std::cout << "Dirección de memoria de str: " << &str << std::endl;
    std::cout << "Dirección de memoria contenida en stringPTR: " << stringPTR << std::endl;
    std::cout << "Dirección de memoria de stringREF: " << &stringREF << std::endl;

    // valores
    std::cout << "Valor de str: " << str << std::endl;
    std::cout << "Valor apuntado por stringPTR: " << *stringPTR << std::endl;
    std::cout << "Valor referenciado por stringREF: " << stringREF << std::endl;

    return (0);
}

