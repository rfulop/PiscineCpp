/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 05:21:38 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/02 05:21:39 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
    static time_t           t;
    static struct tm        *now;

    if (!now)
    {
        t = time(0);
        now = localtime(&t);
    }
    std::cout << '['
    << now->tm_year + 1900
    << std::setw(2) << std::setfill('0') << now->tm_mon
    << std::setw(2) << std::setfill('0') << now->tm_mday
    << '_'
    << std::setw(2) << std::setfill('0') << now->tm_hour
    << std::setw(2) << std::setfill('0') << now->tm_min
    << std::setw(2) << std::setfill('0') << now->tm_sec
    << "] ";
}

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
    _displayTimestamp();
    _accountIndex = _nbAccounts;
    ++_nbAccounts;
    _totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";"
    << "total:" << getTotalAmount() << ";"
    << "deposits:" << getNbDeposits() << ";"
    << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
    << "amount:" << _amount << ";"
    << "deposits:" << _nbDeposits << ";"
    << "withdrawals:" << _nbWithdrawals << std::endl;
}

int Account::getNbAccounts(void) { return Account::_nbAccounts; }

int Account::getTotalAmount(void) { return Account::_totalAmount; }

int Account::getNbDeposits(void) { return Account::_totalNbDeposits; }

int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
    << "p_amount:" << _amount << ";"
    << "deposit:" << deposit << ";";
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << "amout:" << _amount << ";"
    << "nb_deposits:" << _nbDeposits
    << std::endl;

}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
    << "p_amount:" << _amount << ";"
    << "withdrawal:";
    if (withdrawal > _amount)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    else
    {
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        std::cout << "withdrawal:" << withdrawal << ";"
        << "amout:" << _amount << ";"
        << "nb_withdrawals:" << _nbWithdrawals
        << std::endl;
        return true;
    }
}
