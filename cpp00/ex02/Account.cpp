/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itomescu <itomescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 20:12:08 by itomescu          #+#    #+#             */
/*   Updated: 2022/06/04 23:38:44 by itomescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits  = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ):  _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "amount" << this->checkAmount() << ";";
  std::cout << "created" << std::endl;
  Account::_nbAccounts++;
  Account::_totalAmount += initial_deposit;
  };
  
Account::~Account( void ) {
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "amount:" << this->checkAmount() << ";";
  std::cout << "closed" << std::endl;
  return;
};

int	Account::getNbAccounts( void ) {return _nbAccounts;};
int	Account::getTotalAmount( void ) {return _totalAmount;};
int	Account::getNbDeposits( void ) {return _totalNbDeposits;};
int	Account::getNbWithdrawals( void ){return _totalNbWithdrawals;};

void	Account::displayAccountsInfos( void ){
  Account::_displayTimestamp();
  std::cout << "accounts:" << Account::getNbAccounts() << ";";
  std::cout << "total:" << Account::getTotalAmount() << ";";
  std::cout << "deposits:" << Account::getNbDeposits() << ";";
  std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
};

void Account::_displayTimestamp(void) {
  std::time_t result = std::time(nullptr);
  char buf[64];
  std::strftime(buf, 64,"[%Y%m%d_%H%M%S] ", std::localtime(&result));
  std::cout << buf;
}

void	Account::makeDeposit( int deposit ){
  if (deposit <= 0)
    return;
  this->_nbDeposits += 1;
  Account::_totalNbDeposits += 1;
  Account::_totalAmount += deposit;
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "p_amount:" << this->checkAmount() << ";";
  std::cout << "deposit:" << deposit << ";";
  this->_amount += deposit;
  std::cout << "amount:" << this->checkAmount() << ";";
  std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
  

};
bool	Account::makeWithdrawal( int withdrawal ){
  if (this->_amount < withdrawal || withdrawal == 0){
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->checkAmount() << ";";
    std::cout << "withdrawal:refused" << std::endl;
    return false;
  }
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "p_amount:" << this->checkAmount() << ";";
  std::cout << "withdrawal:" << withdrawal << ";";
  
  this->_amount -= withdrawal;
  this->_nbWithdrawals += 1;
  
  std::cout << "amount:" << this->checkAmount() << ";";
  std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
  
  Account::_totalAmount -= withdrawal;
  Account::_totalNbWithdrawals += 1;
  return true;
};
int		Account::checkAmount( void ) const {
  return this->_amount;
};
void	Account::displayStatus( void ) const
  {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->checkAmount() << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
  };
