/*********************************************************************
** Author: Muneef Seidi
** Date: 10/11/2016
** Description: This is a header file for BankAccount.cpp.  It's the
interface for creating a bank account object, withdrawing from the
account's balance, and depositing to the account's balance.
*********************************************************************/
#include <iostream>
#include <string>
using namespace std;
#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

class BankAccount {
   private:	// member variables.
      string customerName;
      string customerID;
      double customerBalance;
      
   public:	// prototype for member functions.
      BankAccount(string n, string id, double b);
      string getCustomerName();
      string getCustomerID();
      double getCustomerBalance();
      void withdraw(double w);
      void deposit(double d);
};
#endif         
