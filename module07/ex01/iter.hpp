/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:12:22 by castorga          #+#    #+#             */
/*   Updated: 2024/10/24 16:12:24 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>

template <typename T>
void	iter(T *array, size_t size, void (*f)(T&))
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

template <typename T>
void	printElement(T &value)
{
	std::cout << value << std::endl;
}
