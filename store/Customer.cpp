/*********************************************************************
** Author: Muneef Seidi
** Date: 11/30/16
** Description: This is the implementation code for Customer.hpp. It 
creates a customer object with a name and an account ID.
*********************************************************************/

#include <iostream>
#include <string>
#include "Customer.hpp"
using namespace std;

Customer::Customer(string n, string a, bool pm) {	//constructor to initialize customer's name, account ID
	name = n;						//and whether customer is a premium member.
	accountID = a;
	premiumMember = pm;
}

string Customer::getAccountID() {		//returns the account ID.
	return accountID;
}

vector<string> Customer::getCart() {		//returns vector of cart.
	return cart;
}

void Customer::addProductToCart(string PID) {	//adds product to cart.
	cart.push_back(PID);
}

bool Customer::isPremiumMember() {		//returns whether customer is a premium member.
	return premiumMember;
}

void Customer::emptyCart() {			//empties the customer's cart.
	cart.clear();
}
