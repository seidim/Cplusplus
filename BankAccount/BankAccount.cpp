/*********************************************************************
** Author: Muneef Seidi
** Date: 10/11/2016
** Description: This is the implementation for BankAccount.hpp.  This
program creates bank accounts with customer name, customer id, and
customer balance.  It allows you to withdraw and deposit to and from 
the accounts balance.
*********************************************************************/
#include <iostream>
#include <string>
#include "BankAccount.hpp"
using namespace std;

BankAccount::BankAccount (string n, string id, double b) {	// constructor for creating
   customerName = n;						// bank account.
   customerID = id;
   customerBalance = b;
}

string BankAccount:: getCustomerName() {	// return customer's name.
   return customerName;
}      

string BankAccount:: getCustomerID() {		// return customer's ID.
   return customerID;
}

double BankAccount:: getCustomerBalance() {	// return customer's balance.
   return customerBalance;
}

void BankAccount:: withdraw(double w) {		// customer's balance after withdrawal.
   customerBalance = customerBalance - w;
}

void BankAccount:: deposit(double d) {		// customer's balance after deposit.
   customerBalance = customerBalance + d;
}
