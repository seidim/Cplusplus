/*********************************************************************
** Author: Muneef Seidi
** Date: 10/31/2016
** Description: This program uses two recursive functions, binToDec and
decToBin. binToDec takes as a parameter a C++ string of '1's and '0's that
are the binary representation of a positive integer and returns the 
equivalent int value. decToBin takes as a parameter a positive int value,
and returns a C++ string of '1's and '0's that are the binary representation
of that number.
*********************************************************************/


#include <iostream>
#include <string>

using namespace std;

int binToDec(string str)	//recursive int function that takes
{				//string parameter.

	int length = str.size();

	if (length == 0) 		//base case.
	
		return 0;

	char ch = str.at(length - 1);
	
	int a = ch - '0';
	
	string s1 = str.substr(0, length - 1);	//recursive call.
	
		return binToDec(s1) * 2 + a;
}

string decToBin(int numb)	//recursive string function that takes
{				//int parameter.
	if (numb == 0) return "0";	//base case
	
	if (numb == 1) return "1";	

	if (numb % 2 == 0)
		return decToBin(numb / 2) + "0";
	else
		return decToBin(numb / 2) + "1";	//recursive call.
}
