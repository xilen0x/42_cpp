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


#include "Serializer.hpp"

int main(void)
{
	Data		data;
	uintptr_t	raw;
	Data		*ptr;

	data.n = 42;
	raw = Serializer::serialize(&data);
	ptr = Serializer::deserialize(raw);

	std::cout << "Puntero no serializado: " << &data << std::endl;
	std::cout << "Puntero serializado: " << raw << std::endl;
	std::cout << "Puntero deserializado: " << ptr << std::endl;

	return (0);
}

// int main( void )
// {
//     Data		myPointer;
//     uintptr_t	temp;

//     std::cout << "Puntero no serializado: " << &myPointer << std::endl;

//     temp = Serializer::serialize(&myPointer);

//     std::cout << "Puntero serializado: " << temp << std::endl;

// 	Data* myPointer2 = Serializer::deserialize(temp);
	
// 	std::cout << "Puntero deserializado: " << myPointer2 << std::endl;

// 	return (0);
    
// }