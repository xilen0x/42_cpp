/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:11:20 by castorga          #+#    #+#             */
/*   Updated: 2024/10/28 17:11:22 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

bool isValidExpression(const std::string &expression);
int calculateRPN(const std::string &expression);

class InvalidExpression : public std::exception {
	public:
		virtual const char* what() const throw();
};
