/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:25:47 by recozzi           #+#    #+#             */
/*   Updated: 2023/10/30 17:26:11 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(Account::getNbAccounts()), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += this->checkAmount();
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "closed" << std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= this->checkAmount();
}

void	Account::_displayTimestamp(void)
{
	std::time_t	now = time(0);
	std::tm*	timeInfo = std::localtime(&now);

	std::cout << "[" << timeInfo->tm_year + 1900;
	std::cout << timeInfo->tm_mon + 1;
	std::cout << timeInfo->tm_mday << "_";
	std::cout << timeInfo->tm_hour;
	std::cout << timeInfo->tm_min;
	std::cout << timeInfo->tm_sec << "] ";
}

int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int	Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

int	Account::checkAmount(void) const
{
	return this->_amount;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->checkAmount() << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;	
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->checkAmount() << ";";
	std::cout << "withdrawal:";
	if (withdrawal < 0 || withdrawal > this->checkAmount())
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout << withdrawal << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}
