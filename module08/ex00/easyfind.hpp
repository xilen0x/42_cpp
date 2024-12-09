/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:16:54 by castorga          #+#    #+#             */
/*   Updated: 2024/10/24 15:16:56 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>//find
#include <exception>

//Colors
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define RESET "\033[0m"


class NotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw();
};

template <typename T>
void easyfind(T container, int numToFind)
{
	if (std::find(container.begin(), container.end(), numToFind) == container.end())
		throw NotFoundException();
}

#endif