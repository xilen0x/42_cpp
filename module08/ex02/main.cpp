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

#include "MutantStack.hpp"
#include <iostream>

// int main()
// {
// 	MutantStack<int>	mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }

// Función para mostrar la pila visualmente
// void displayStack(const MutantStack<int>& mstack, const std::string& color) {
//     MutantStack<int>::const_iterator it;
//     std::cout << "Stack visualization:" << std::endl;
//     for (it = mstack.begin(); it != mstack.end(); ++it) {
//         std::cout << color << "▉" << RESET << std::endl;
//     }
//     if (mstack.empty()) {
//         std::cout << "(Empty stack)" << std::endl;
//     }
//     std::cout << "-------------------" << std::endl;
// }

void displayStack(const MutantStack<int>& mstack, const std::string& color) {
    std::cout << "Stack visualization: ";
    for (size_t i = 0; i < mstack.size(); ++i) {
        std::cout << color << "▉" << RESET;
    }
    std::cout << std::endl;
	if (mstack.empty()) {
        std::cout << "(Empty stack)" << std::endl;
    }
    std::cout << "-------------------" << std::endl;
}

int main()
{
    MutantStack<int> mstack;

    // Agregar elementos a la pila
    mstack.push(5);
    std::cout << GREEN << "Pushed 5" << RESET << std::endl;
    displayStack(mstack, GREEN);

    mstack.push(17);
    std::cout << GREEN << "Pushed 17" << RESET << std::endl;
    displayStack(mstack, GREEN);

    mstack.push(117);
    std::cout << GREEN << "Pushed 117" << RESET << std::endl;
    displayStack(mstack, GREEN);

    mstack.push(50);
    std::cout << GREEN << "Pushed 50" << RESET << std::endl;
    displayStack(mstack, GREEN);

    // Mostrar el elemento superior
    std::cout << "\nTop of stack: " << mstack.top() << std::endl;

    // Eliminar elemento
    mstack.pop();
    std::cout << RED << "Popped" << RESET << std::endl;
    displayStack(mstack, RED);

    // Mostrar el elemento superior después de pop
    std::cout << "\nTop of stack: " << mstack.top() << std::endl;

    // Mostrar el tamaño actual de la pila
    std::cout << "\nStack size: " << mstack.size() << std::endl;

    // Agregar más elementos
    mstack.push(3);
    std::cout << GREEN << "Pushed 3" << RESET << std::endl;
    displayStack(mstack, GREEN);

    mstack.push(5);
    std::cout << GREEN << "Pushed 5" << RESET << std::endl;
    displayStack(mstack, GREEN);

    mstack.push(737);
    std::cout << GREEN << "Pushed 737" << RESET << std::endl;
    displayStack(mstack, GREEN);

    mstack.push(0);
    std::cout << GREEN << "Pushed 0" << RESET << std::endl;
    displayStack(mstack, GREEN);
	// mstack.pop();
	// mstack.pop();
	// mstack.pop();
	// mstack.pop();
	// mstack.pop();
	// mstack.pop();
	// mstack.pop();
	// displayStack(mstack, RED);
    return 0;
}