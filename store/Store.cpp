/*********************************************************************
** Author: Muneef Seidi
** Date: 11/30/16
** Description: This is the implementation code for Store.hpp. It creates
a store object, which has products in its inventory and customer's as
its members.
*********************************************************************/

#include <iostream>
#include <string>
#include <algorithm>
#include "Store.hpp"


using namespace std;



void Store::addProduct(Product* p) {		//adds a product to the inventory.
	inventory.push_back(p);
}

void Store::addMember(Customer* c) {		//adds customer to members.
	members.push_back(c);
}

Product* Store::getProductFromID(string productId) {	//returns product with matching ID.
	for (int i = 0; i<inventory.size(); i++) {
		
		if (productId.compare(inventory[i]->getIdCode()) == 0) {	// check to see if product is in inventory.
			return inventory[i];
		}
	}
	return NULL;			//returns NULL if no product in inventory.
}

Customer* Store::getMemberFromID(string memberId) {		//returns customer with matching ID.
	for (int i = 0; i<members.size(); i++) {
		
		if (memberId.compare(members[i]->getAccountID()) == 0) {	//check if the memberId matches to any member of store.
			return members[i];
		}
	}
	return NULL;		//returns NULL if no matching ID.
}

string UpperCase(string str) {
	transform(str.begin(), str.end(), str.begin(), (int(*)(int))toupper);		// convert a string into upper case
	return str;
}


void Store::productSearch(string str) {		//search for product in store with id and description.
	str = UpperCase(str);

	for (int i = 0; i<inventory.size(); i++) {
		
		string UpperTitle = UpperCase(inventory[i]->getTitle());	//title string converted to uppercase.

		string UpperDescrip = UpperCase(inventory[i]->getDescription());	//description string converted to uppercase.
		// chcek if search string is present in title or description
		if (UpperTitle.find(str) != string::npos || UpperDescrip.find(str) != string::npos) {	//check to see if search is present in title and description.
			cout << "Title: " << inventory[i]->getTitle() << ", IdCode: " << inventory[i]->getIdCode() << ", Price: $" << inventory[i]->getPrice() << ", Description:" << inventory[i]->getDescription() << endl;
		}
	}
}

void Store::addProductToMemberCart(string pID, string mID) {	//adds product to the cart of the member.
	Product *p = getProductFromID(pID);
	Customer *m = getMemberFromID(mID);

	if (p != NULL && m != NULL) {		//check to see if product is in the inventory or not.

		if (p->getQuantityAvailable()>0) {
			m->addProductToCart(pID);
		}
		else {
			cout << "Sorry, product " << pID << " is currently out of stock." << endl;	//indicates when product is not in stock.
		}
	}
	else {
		if (p == NULL) {
			cout << "Product " << pID << " not found." << endl;	//indicates if product is not in store.
		}
		// member with id mID is not a member of the store
		if (m == NULL) {
			cout << "Member " << mID << " not found." << endl;	//indicates if customer is not a member of store
		}
	}
}

void Store::checkOutMember(string mID) {	//member check out.
	Customer *m = getMemberFromID(mID);
	if (m == NULL) {
		cout << "Member " << mID << " not found." << endl;
	}
	else {
		vector<string> cart = m->getCart();	//member shopping cart.
		double subTotal = 0;
		int totalItems = 0;
		for (int i = 0; i<cart.size(); i++) {
			Product *p = getProductFromID(cart[i]);

			if (p->getQuantityAvailable()>0) {		//check to see if product is in stock or not.
				cout << "Title: " << p->getTitle() << ", Price: $" << p->getPrice() << endl;
				subTotal += p->getPrice();
				totalItems++;
				p->decreaseQuantity();
			}
			else {
				cout << "Sorry, product " << cart[i] << ", " << p->getTitle() << " is no longer available." << endl; //indicates product no longer available.
			}
		}

		if (totalItems == 0) {				//if number of items to be shipped is 0.
			cout << "There are no items in the cart." << endl;
			return;
		}
		double shippingCost = (m->isPremiumMember()) ? 0 : 0.07*subTotal;
		double final = subTotal + shippingCost;						//returns final cost, which is subtotal plus the shipping cost.
		cout << "Sub-Total: $" << subTotal << ", Shipping Cost: $" << shippingCost << ", Final Total Cost: $" << final << endl;

		m->emptyCart();
	}
}
