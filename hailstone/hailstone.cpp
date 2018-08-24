/*********************************************************************
** Author: Muneef Seidi
** Date: 10/4/2016
** Description: This function takes the starting integer as a 
parameter and displays how many steps it takes to reach 1.
*********************************************************************/
#include <iostream>
using namespace std;


int hailstone  (int num) {	// function to establish number of steps to reach 1.
   int count = 0;
   while(num != 1) {
      if (num % 2 == 0) {	// if number is even, divide it by 2.
         num = num/2;
      }
      else {
         num = (3*num)+1;  	// if number is odd, multiply by 3 and add 1.
      } 
      count++;  		// keeps count for number of steps.
   }
   return count;
}
