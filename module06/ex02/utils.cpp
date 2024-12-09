/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:28:06 by castorga          #+#    #+#             */
/*   Updated: 2024/12/03 16:28:08 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base *generate()
{
	int randomValue;

    std::srand(static_cast<unsigned>(time(0)));  // Inicializa la semilla para generar números aleatorios
    randomValue = std::rand() % 3;           // Genera un número aleatorio entre 0 y 2

    switch (randomValue) {
        case 0: return new A();          // Devuelve una nueva instancia de A
        case 1: return new B();          // Devuelve una nueva instancia de B
        case 2: return new C();          // Devuelve una nueva instancia de C
        default: return (0);             // En caso de error (no debería ocurrir)
    }
}

void identify(Base *p)
{
    if (dynamic_cast<A*>(p)) {
        std::cout << "type A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "type B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "type C" << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}

void identify(Base &p) {
    // Usamos un puntero a la clase base para evitar el uso de punteros dentro de la función
    identify(&p);  // Llama a la versión de puntero de identify
}
