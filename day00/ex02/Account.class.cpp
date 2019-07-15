#include "Account.class.hpp"
#include "iostream"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << Account::_nbAccounts << ";amount:" << \
		initial_deposit << ";created" << std::endl;
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" \
		<< this->_amount << ";closed" << std::endl;
}

void		Account::_displayTimestamp( void )
{
	time_t	timev = time(&timev);
	struct tm *stamp = localtime(&timev);

	std::cout << "[";
	std::cout << stamp->tm_year + 1900;
	if (stamp->tm_mon >= 9)
		std::cout << stamp->tm_mon + 1;
	else
		std::cout << "0" << stamp->tm_mon;
	if (stamp->tm_mday > 9)
		std::cout << stamp->tm_mday;
	else
		std::cout << "0" << stamp->tm_mday;
	if (stamp->tm_hour > 9)
		std::cout << "_" << stamp->tm_hour;
	else
		std::cout << "_0" << stamp->tm_hour;
	if (stamp->tm_min > 9)
		std::cout << stamp->tm_min;
	else
		std::cout << "0" << stamp->tm_min;
	if (stamp->tm_sec >= 9)
		std::cout << stamp->tm_sec + 1;
	else
		std::cout << "0" << stamp->tm_sec;
	std::cout << "] ";
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void		Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	this->_nbDeposits += 1;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposits:" << deposit << ";";
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
}

bool		Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "withdrawal:" << "refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals += 1;
	this->_amount -= withdrawal;
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
	return (true);
}

void		Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void		Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}
