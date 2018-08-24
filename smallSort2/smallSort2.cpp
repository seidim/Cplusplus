/*********************************************************************
** Author: Muneef Seidi
** Date: 10/17/2016
** Description: This void function takes as parameters the addresses of 
three int variables and sorts the ints at those addresses into ascending order.
*********************************************************************/
#include <iostream>

using namespace std;

void smallSort(int *a, int *b, int *c)	{	// Void function for smallsort.
    int num[3] = {*a,*b,*c};	// pointers to int variables
	int temp;

    while (num[0]>num [1]|| num[1]> num[2]|| num[0]> num[2]){	// while loop to begin test to begin
								// sorting numbers.
	for(int k = 0; k < 2; k++)	{	

		if(num[k] > num[k+1])	{		// using for loop and if statement to sort
			temp = num[k];			// numbers in ascending order.
			num[k] = num[k+1];
			num[k+1] = temp;
			}
		}
	}

	for(int z = 0; z < 3; z++)	// for loop to return numbers in ascending order.
	{
		cout << num[z] << endl;
	}

}

