/*********************************************************************
** Author: Muneef Seidi
** Date: 10/24/2016
** Description: This function is a modification of the selection sort
function.  This function takes two parameters, an array of strings and
the size of the array.  It sorts an array of C++ strings.
*********************************************************************/

#include <iostream>
#include <string>

using namespace std;


void stringSort(string array[], int size)	{	// function to sort array of strings
							// using selection sort.
int startScan,
    minIndex,
    minIndex2,
    i,
    j;

string minValue1,
        minValue2,
        newArray[size];

    for( i=0; i < size; i++){

    newArray[i] = array[i];

        for(j = 0; j < sizeof(newArray[i]); j++)


        newArray[i][j]=toupper(newArray[i][j]);		//converting string to upper case
}							//to make strings case insensitive.

    for(startScan = 0; startScan < (size -1); startScan++)   {

        minIndex = startScan;
        minIndex2 = startScan;
        minValue1 = array[startScan];
        minValue2 = newArray[startScan];

            for(int index = startScan +1; index < size; index++)	{	// loop to find lowest remaining string.

                if (newArray[index] < minValue2)	{	// perform comparison, looking for lowestest remaining string.
                    
			minValue1 = array[index];
                    	minIndex = index;
                    	minIndex2 = index;
                    	minValue2 = newArray[index];
		}
	
	    }
        
	array[minIndex] = array[startScan];		// perform swap.
        newArray[minIndex2] = newArray[startScan];
        newArray[startScan] = minValue2;
        array[startScan] = minValue1;
	}
}

