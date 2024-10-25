/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:51:24 by castorga          #+#    #+#             */
/*   Updated: 2024/10/15 12:51:26 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void increment(int &e){
	e += 1;
}

int main()
{
    int myArray[] = {1, 2, 3, 4, 5};
	size_t lenArray = sizeof(myArray) / sizeof(myArray[0]);

    std::cout << "Array Original:" << std::endl;
    iter(myArray, lenArray, printElement);

    std::cout << "\nArray incrementado:" << std::endl;
    iter(myArray, lenArray, increment);
    iter(myArray, lenArray, printElement);

    std::string strArray[] = {"Hello", "World", "C++", "42"};
    size_t strArraySize = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "\nArray de strings:" << std::endl;
    iter(strArray, strArraySize, printElement);

    return (0);
}
