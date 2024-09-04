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

/*---------------------------------INITIALIZE----------------------------------*/
int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

/*---------------------------------GETTERS----------------------------------*/
int		Account::getNbAccounts( void ){
	return (_nbAccounts);}

int		Account::getTotalAmount( void ){
	return (_totalAmount);}

int		Account::getNbDeposits( void ){
	return (_totalNbDeposits);}

int		Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);}

int		Account::checkAmount( void ) const{
	return (_amount);}

/*---------------------------------DEPOSITS----------------------------------*/
void	Account::makeDeposit( int deposit ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposits:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits + 1 << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
}

/*---------------------------------WITHDRAWALS----------------------------------*/
bool	Account::makeWithdrawal( int withdrawal ){
	
	if (_amount - withdrawal >= 0)
	{
		_displayTimestamp();
		// _amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount  << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		_amount = _amount - withdrawal;
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal refused" << std::endl;
	}
	return (true);
}

/*---------------------------------DISPLAY TIMESTAMP----------------------------------*/
void	Account::_displayTimestamp( void )
{
	std::time_t current_time_in_sec = std::time(0);
	std::tm* 	current_time_formated = std::localtime(&current_time_in_sec);

	char buffer[19];
	std::strftime(buffer, 19, "[%Y%m%d_%H%M%S] ", current_time_formated);
	std::cout << buffer;
}

/*-------------------------------DISPLAY INFO--------------------------------*/
void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
	 		  << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals()<< std::endl;
}

/*-------------------------------DISPLAY STATUS--------------------------------*/
void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

/*******************************CONSTRUCTORS**********************************/
Account::Account( void )
{
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = getNbAccounts();
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::Account( int initial_deposit )
{
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = getNbAccounts();
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

/*******************************DESTRUCTORS**********************************/
Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}
