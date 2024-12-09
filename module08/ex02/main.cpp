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
#include <cstdlib>  // Para system()

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

void displayStack(const MutantStack<int>& mstack, const std::string& color)
{
	std::cout << "\nStack visualization:" << std::endl;

	if (mstack.empty()) {
        std::cout << "(Empty stack)" << std::endl;
		return ;
    }
    std::cout << std::endl;
	MutantStack<int>::const_iterator it;
    for (it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << color << "▉" << RESET;
        std::cout << " " << *it << " ";
    }
    std::cout << std::endl;
}

void menu(MutantStack<int>& mstack)
{
    std::string option;
    int number;

    while (true)
    {
        std::cout << std::endl;
        std::cout << YELLOW "XXXXXXXXXXXXXXXXXXXXXXXXXX   SELECT AN OPTION   XXXXXXXXXXXXXXXXXXXXXXXXXX" << RESET << std::endl;
        std::cout << std::endl;
        std::cout << "1. Add a number to the stack (Push)" << std::endl;
        std::cout << "2. Remove a number from the stack (Pop)" << std::endl;
        std::cout << "3. Display the top of the stack (Top)" << std::endl;
        std::cout << "4. Display the stack size (Size)" << std::endl;
        std::cout << "5. Display the stack (Stack)" << std::endl;
        std::cout << "6. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> option;

        // Validar entrada de opción
        if (option.empty() || option.size() > 1 || option[0] < '1' || option[0] > '6') {
            std::cout << RED << "Invalid option. Please try again." << RESET << std::endl;
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }

        // system("clear");  // Descomentar si deseas limpiar la pantalla
        switch (option[0])
        {
        case '1': // Push
            {
                std::cout << "Number to add: ";
                if (!(std::cin >> number)) {
                    std::cout << RED << "Invalid number. Please try again." << RESET << std::endl;
                    std::cin.clear();
                    std::cin.ignore(1000, '\n');
                } else {
                    mstack.push(number);
                    std::cout << GREEN << "\nPushed number " << number << RESET << std::endl;
                    displayStack(mstack, GREEN);
                }
                break;
            }
        case '2': // Pop
            {
                if (mstack.empty()) {
                    std::cout << RED << "\nStack is empty. Cannot remove elements." << RESET << std::endl;
                } else {
                    mstack.pop();
                    std::cout << RED << "\nRemoved top element" << RESET << std::endl;
                    displayStack(mstack, RED);
                }
                break;
            }
        case '3': // Top
            {
                if (mstack.empty()) {
                    std::cout << RED << "\nStack is empty. No top element to display." << RESET << std::endl;
                } else {
                    std::cout << "\nTop of stack: " << mstack.top() << std::endl;
                }
                break;
            }
        case '4': // Size
            {
                std::cout << "\nStack size: " << mstack.size() << std::endl;
                break;
            }
        case '5': // Display stack
            {
                displayStack(mstack, RESET);
                break;
            }
        case '6': // Exit
            {
                std::cout << "\nExiting..." << std::endl;
                return;
            }
        }
    }
}

// int main()
// {
//     MutantStack<int> mstack;

// 	menu(mstack);

// 	// mstack.pop();
// 	// mstack.pop();
// 	// mstack.pop();
// 	// mstack.pop();
// 	// mstack.pop();
// 	// mstack.pop();
// 	// mstack.pop();
// 	// displayStack(mstack, RED);
//     return (0);
// }
