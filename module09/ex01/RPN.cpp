/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:11:14 by castorga          #+#    #+#             */
/*   Updated: 2024/10/28 17:11:16 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <stack>
#include <sstream>

bool isValidExpression(const std::string &expression)
{
    // Verificar que la expresión solo contenga dígitos, operadores y espacios
    for (size_t i = 0; i < expression.size(); ++i) {
        char c = expression[i];
        if (!isdigit(c) && c != '+' && c != '-' && c != '*' && c != '/' && c != ' ') {
            return false;
        }
    }
    return true;
}

int doOperation(int a, int b, char op) {
    switch (op) {
        case '+': return (a + b);
        case '-': return (a - b);
        case '*': return (a * b);
        case '/': 
            if (b == 0) 
				throw std::runtime_error("Error: Division by zero");
            return (a / b);
        default:
            throw std::invalid_argument("Error: Invalid operator");
    }
}

int calculateRPN(const std::string &expression)
{
    std::stack<int> stack;
    std::stringstream ss(expression);
    std::string token;

    while (ss >> token) {
        // Revisar si el token es un número
        if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-')) {
            int number;
            std::stringstream ss(token);
            ss >> number;
            stack.push(number);
        }
        // Revisar si el token es un operador
        else if (token.size() == 1 && (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/')) {
            if (stack.size() < 2) throw std::logic_error("Error: Insufficient operands");

            int b = stack.top(); stack.pop();
            int a = stack.top(); stack.pop();

            int result = doOperation(a, b, token[0]);
            stack.push(result);
        }
        else {
            throw std::logic_error("Error: Invalid expression");
        }
    }

    if (stack.size() != 1) throw std::logic_error("Error: Invalid expression");
    return stack.top();
}


// exception
const char* InvalidExpression::what() const throw()
{
	return ("Error: Invalid expression");
}
