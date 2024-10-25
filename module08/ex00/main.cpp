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

#include <vector>
#include <iostream>
#include <list>
#include "easyfind.hpp"

const char* NotFoundException::what() const throw()
{
	return ("Element not found");
}


int main(void)
{
	std::vector<int> v;
	std::list<int> l;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		l.push_back(i);
	}
	try	{
		easyfind(v, 5);
		std::cout << GREEN << "Element found in vector" << RESET << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	try	{
		easyfind(l, 5);
		std::cout << "Element found in list" << std::endl;
	}
	catch (std::exception &e)	{
		std::cout << RED << e.what() << RESET << std::endl;
	}
	try	{
		easyfind(v, 10);
		std::cout << GREEN << "Element found in vector" << RESET << std::endl;
	}
	catch (std::exception &e)	{
		std::cout << RED << e.what() << RESET << std::endl;
	}
	try	{
		easyfind(l, 10);
		std::cout << "Element found in list" << std::endl;
	}
	catch (std::exception &e)	{
		std::cout << RED << e.what() << RESET << std::endl;
	}
	return (0);
}


