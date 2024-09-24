/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:07:56 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/19 18:08:00 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account :: Account(void)
{
    _nbWithdrawals = 0;
    _nbDeposits = 0;
    _amount = 0;
    _accountIndex = _nbAccounts;
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex 
                << ";amount:" << _amount 
                << ";created"
                << std::endl;
    _nbAccounts++;
}

Account ::Account(int initial_deposit)
{
    _nbWithdrawals = 0;
    _nbDeposits = 0;
    _amount = initial_deposit;
    _accountIndex = _nbAccounts;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex 
                << ";amount:" << _amount 
                << ";created"
                << std::endl;
    _nbAccounts++;
}

Account ::~Account(void)
{
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex 
                << ";amount:" << _amount 
                << ";closed"
                << std::endl;
}

int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int Account::getTotalAmount(void)
{
    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout   << "accounts:" << getNbAccounts() 
                << ";total:"<< getTotalAmount() 
                << ";deposits:" << getNbDeposits()
                << ";withdrawals:" << getNbWithdrawals()
                << std::endl;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex 
                << ";amount:" << _amount 
                << ";deposits:" << _nbDeposits 
                << ";withdrawals:" << _nbWithdrawals 
                << std::endl;
}

void Account :: makeDeposit(int deposit)
{
    _displayTimestamp();
    _amount = _amount + deposit;
    _nbDeposits++;
    _totalAmount = _totalAmount + deposit;
    _totalNbDeposits++;
    std::cout   << "index:" << _accountIndex 
                << ";p_amount:" << _amount - deposit
                << ";deposit:" << deposit
                << ";amount:" << _amount
                << ";nb_deposits:" << _nbDeposits
                << std::endl;
}

bool Account :: makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    if (_amount < withdrawal)
    {
        std::cout   << "index:" << _accountIndex
                    << ";p_amount:" << _amount
                    << ";withdrawal:refused" << std::endl;
        return false;
    }
    _amount = _amount - withdrawal;
    _nbWithdrawals++;
    _totalAmount = _totalAmount - withdrawal;
    _totalNbWithdrawals++;
    std::cout   << "index:" << _accountIndex 
                << ";p_amount:" << _amount + withdrawal
                << ";withdrawal:" << withdrawal
                << ";amount:" << _amount
                << ";nb_withdrawals:" << _nbWithdrawals
                << std::endl;
    return true;
}


int Account::checkAmount(void) const
{
    return _amount;
}
void Account::_displayTimestamp(void)
{
    time_t now;

    now = time(NULL);
    std::cout << std::put_time(localtime(&now), "[%Y%m%d_%H%M%S] ");
}
