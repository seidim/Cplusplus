/*********************************************************************
** Author: Muneef Seidi
** Date: 10/4/2016
** Description: This function takes in the time as an argument and 
returns the distance in meters that the object has fallen in that time.
*********************************************************************/

#include <iostream>
using namespace std;

double fallDistance (int t) {	// function to determine distance of fallen object.
   double d,g = 9.8;
   d = (g*(t*t))/2;		// formula to determine distance.
   return d;  
   
}
