/*********************************************************************
** Author: Muneef Seidi
** Date: 10/4/2016
** Description: This program prompts the user for a name of a file and
tries to open it.  The program will then add together the integers in 
the file, open an output file and write the sum to that file.
*********************************************************************/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string filename;
	cout << "Please enter a file name to try and open" << endl;	//input from user.
	cin >> filename;
	ifstream inputFile;
	ofstream outputFile;
	int sum = 0;
	int a = 0;
	inputFile.open(filename);			// open file inputted by user.
	outputFile.open("sum.txt");			// file created.

	if (!inputFile) {
		cout << "could not access file";	// displays error message if no file exists.
	}
	while (inputFile >> a) {
		sum += a;
	}
	outputFile << sum << endl;
}  
