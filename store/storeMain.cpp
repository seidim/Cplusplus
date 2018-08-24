#include <iostream>
#include <string>
#include "Store.hpp"
using namespace std;

int main() {
	Customer *m = new Customer("Muneef Seidi", "muneef0185", false);
	Product *p1 = new Product("mac123", "Macbook", "Macbook Air 15.5' ", 1122.5, 1);
	Product *p2 = new Product("air12", "Air Purifier", "Aqua Air Purifier Alpha' ", 11.5, 3);
	Product *p3 = new Product("aqua12", "Water Purifier", "Aqua Water Purifier' ", 10, 2);
	Store *s = new Store();
	s->addMember(m);
	s->addProduct(p1);
	s->addProduct(p3);
	s->addProduct(p2);
	s->productSearch("air");
	s->addProductToMemberCart(p1->getIdCode(), m->getAccountID());
	s->addProductToMemberCart(p2->getIdCode(), m->getAccountID());
	s->addProductToMemberCart(p1->getIdCode(), m->getAccountID());
	s->checkOutMember(m->getAccountID());
	s->checkOutMember(m->getAccountID());
}
