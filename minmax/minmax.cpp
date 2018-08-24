/*********************************************************************
** Author: Muneef Seidi
** Date: 10/4/2016
** Description: This program asks the user how many integers they will
like to enter. After they enter the number of integers they have requested,
the program will then display the largest and smallest of those integers.
*********************************************************************/
#include <iostream>
using namespace std;

int main() {
   cout << "How many integers would you like to enter? \n"; // get input from user.
   int num;
   double a;
   cin >> num;
   cout << "Please enter " << num << " integers \n"; // get input from user for number of integers.
   double max;
   double min;
   cin >> a;
   max = a;
   min = a;				// loop through each integer inputted to establish max
   for ( int i = 0; i < num-1; i++) {	// and min integer.
      double r;
      cin >> r;
      if ( r > max ) {
         max = r;
      }
      else if ( r < min ) {
         min = r;
      }      
   }
   
   cout << "Min: " << min << endl;	// display results.
   cout << "Max: " << max << endl;

}
