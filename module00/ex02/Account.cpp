/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:46:32 by castorga          #+#    #+#             */
/*   Updated: 2024/09/04 12:46:34 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

void	Account::_displayTimestamp( void )
{
	std::time_t current_time_in_sec = std::time(0);
	std::tm* 	current_time_formated = std::localtime(&current_time_in_sec);

	char buffer[18];
	std::strftime(buffer, 18, "[%Y%m%d_%H%M%S]", current_time_formated);
	std::cout << buffer;
}


void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	 //std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}
