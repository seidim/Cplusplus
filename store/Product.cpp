/*********************************************************************
** Author: Muneef Seidi
** Date: 11/30/16
** Description: This is the implementation code for Product.hpp. It
creates a product object using ID code, title, description, price,
and quantity available.
*********************************************************************/
#include <iostream>
#include <string>
#include "Product.hpp"
using namespace std;

Product::Product(string id, string t, string d, double p, int qa) {	//constructor to initialize values.
	idCode = id;
	title = t;
	description = d;
	price = p;
	quantityAvailable = qa;
}

string Product::getIdCode() {		//returns id.
	return idCode;
}

string Product::getTitle() {		//returns title.
	return title;
}

string Product::getDescription() {	//returns description.
	return description;
}
double Product::getPrice() {		//returns the price.
	return price;
}

int Product::getQuantityAvailable() {	//returns the quantity available.
	return quantityAvailable;
}

void Product::decreaseQuantity() {	//decreases quantity available by 1.
	quantityAvailable--;
}
