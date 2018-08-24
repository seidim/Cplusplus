/*********************************************************************
** Author: Muneef Seidi
** Date: 10/16/2016
** Description: This function takes as parameters an array of integers
and the size of the array, and returns a vector containing the mode(s).
*********************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findMode(int array[], int size) {	// vector of int array.
   int mode = 0;
   vector<int> vector;
   for(int i = 0; i < size; i++) {
      int count = 0;
      for(int j = i+1; j < size; j++) {		// for loop to test for which
         if (array[i] == array[j]) {		// number occurs the most.
            count += 1;
         }  
      }
      if(count == mode) {
         vector.push_back(array[i]);		// if count is equal to mode
      }   					// push back to end of vector.
      if (count > mode) {			
         mode = count;				// if count is greater than mode,
         vector.clear();			// set mode equal to value of count,
         vector.push_back(array[i]);		// clear vector, and push back value.
      }   
   }
  sort(vector.begin(),vector.end());		// sort and return vector.
  return vector;

}
  
