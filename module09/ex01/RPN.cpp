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

bool isValidExpression(const std::string &expression)
{
	int i = 0;
	int count = 0;

	while (expression[i])
	{
		if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/')
			count++;
		i++;
	}
	if (count == 0)
		return (false);
	return (true);
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
	int				a, b;

for (size_t i = 0; i < expression.size(); ++i) {
        char c = expression[i];

        if (c >= '0' && c <= '9') {
            stack.push(c - '0'); // Convert char to int
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            if (stack.size() < 2) throw std::logic_error("Error: Insufficient operands");

            b = stack.top(); stack.pop(); // Operando 2
            a = stack.top(); stack.pop(); // Operando 1

            stack.push(doOperation(a, b, c)); // Realiza la operación
        }
        // Ignorar espacios en blanco si es necesario
    }
    if (stack.size() != 1) 
		throw std::logic_error("Error: Invalid expression");
    return stack.top();
}

// exception
const char* InvalidExpression::what() const throw()
{
	return ("Error: Invalid expression");
}

