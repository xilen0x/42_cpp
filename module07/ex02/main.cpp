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

// #include <iostream>
// #include <stdlib.h>
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

#include "Array.hpp"

int main()
{
    // Prueba del constructor por defecto
    Array<int> arr1;
    std::cout << "Tamaño del arr1 (por defecto): " << arr1.size() << std::endl;

    // Prueba del constructor con tamaño
    Array<int> arr2(5);
    std::cout << "Tamaño del arr2: " << arr2.size() << std::endl;

    // Asignar valores al array
    for (unsigned int i = 0; i < arr2.size(); i++) {
        arr2[i] = i * 10;
    }

    // Imprimir valores del array
    std::cout << "Contenido del arr2: ";
    for (unsigned int i = 0; i < arr2.size(); i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    // Prueba del constructor de copia
    Array<int> arr3 = arr2;
    std::cout << "Tamaño del arr3 (copia): " << arr3.size() << std::endl;

    // Modificar el array copiado y asegurarse de que no afecta al original
    arr3[0] = 100;
    std::cout << "arr3[0] modificado a 100, arr2[0]: " << arr2[0] << std::endl;

    // Prueba de excepciones al acceder fuera de los límites
    try {
        std::cout << arr2[10] << std::endl;  // Esto debería lanzar una excepción
    } catch (const std::out_of_range& e) {
        std::cerr << "Excepción: " << e.what() << std::endl;
    }


    return (0);
}
