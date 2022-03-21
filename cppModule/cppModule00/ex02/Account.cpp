#include <ctime>
#include <iostream>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account()
{
}

Account::Account( int initial_deposit ):	_accountIndex(_nbAccounts),
											_amount(initial_deposit),
											_nbDeposits(0),
											_nbWithdrawals(0)
{
	_nbAccounts += 1;
	_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";created" << std::endl;
}

Account::~Account ( void )
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed" << std::endl;
}

void    Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
    std::cout << "account:" << _accountIndex
              << ";p_amount:" << _amount;
    _amount += deposit;
    _nbDeposits += 1;
    _totalAmount += deposit;
    _totalNbDeposits += 1;
    std::cout << ";deposit:" << deposit
              << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount;
    if (withdrawal <= _amount)
    {
        _totalAmount -= withdrawal;
        _totalNbWithdrawals += 1;
        _amount -= withdrawal;
        _nbWithdrawals += 1;
        std::cout << ";withdrawal:" << withdrawal
                  << ";amount:" << _amount
                  << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return (true);
    }
    std::cout << ";withdrawal:refused" << std::endl;
    return (true);
}

void    Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits" << _nbDeposits
              << ";withdeawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout	<< "accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::_displayTimestamp()
{
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	std::cout	<< "[" << now->tm_year + 1900
				<< std::setfill('0') << std::setw(2) << now->tm_mon + 1
				<< std::setfill('0') << std::setw(2) << now->tm_mday << "_"
				<< now->tm_hour
				<< now->tm_min
				<< now->tm_sec << "] ";
}
