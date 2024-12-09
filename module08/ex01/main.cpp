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

#include "Span.hpp"
#include <iostream>

// int main()
// {
// 	Span sp = Span(5);

// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);

// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;

// 	return 0;
// }

int main(void)
{
    Span    sp(5);
    Span    sp2(10000);
    int     i;
    
    try {
        // test con array de 5 números
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << BRED << e.what() << RESET << std::endl;
    }
    try {
        std::cout << std::endl;
        // test con rango de números
        std::vector<int> largeRange(10000);
        for (i = 0; i < 10000; ++i)
            largeRange[i] = i * 2;
        sp2.addRange(largeRange.begin(), largeRange.end());
        std::cout << "Shortest Span (sp2): " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest Span (sp2): " << sp2.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << BRED << e.what() << RESET << std::endl;
    }
    return (0);
}
