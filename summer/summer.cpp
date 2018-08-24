/*********************************************************************
** Author: Muneef Seidi
** Date: 10/31/2016
** Description: This recursive function takes in two parameters, an 
array of doubles and the size of the array and returns the sum of the 
values in the array.
*********************************************************************/


#include <iostream>


using namespace std;

double summer(double array[], int size)		//recursive function to find sum of array.

{

	if (size == 0)		//base case.
	{
		return 0;
	}

	else

		return array[size - 1] + summer(array, size - 1); //recursive call.

}
