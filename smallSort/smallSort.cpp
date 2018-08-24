/*********************************************************************
** Author: Muneef Seidi
** Date: 10/4/2016
** Description: This void function takes three int parameters by 
reference and sorts their values into ascending order.
*********************************************************************/
#include <iostream>
using namespace std;

void smallSort ( int &a, int &b, int &c) {	// void function to sort values in ascending order.
   if ( b < a ) {
      int temp = a;
      a = b;
      b = temp;					// use if statement to determine size of each integer
   }						// and line them up in relation to each other from
   if ( c < a ) {				// smallest to largest.
      int temp = a;
      a = c;
      c = temp;
   }
   if ( c < b ) {
      int temp = b;
      b = c;
      c = temp;
   }         


}
