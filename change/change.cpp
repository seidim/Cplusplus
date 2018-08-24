/*********************************************************************
** Author: Muneef Seidi
** Date: 9/27/2016
** Description: This program takes in a number of cents up to 99. It returns how
many of each type of coin that represents that cents amount with the fewest number
of coins.
*********************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int quarters, dimes, nickels, pennies, userAmount;

    cout << "Please enter an amount in cents less than a dollar." << endl;
    cin >> userAmount;

    quarters = userAmount / 25;
    userAmount= userAmount % 25;
    dimes = userAmount / 10;
    userAmount = userAmount % 10;
    nickels = userAmount / 5;
    userAmount = userAmount % 5;
    pennies = userAmount / 1;

    cout << "Your change will be:" << endl;
    cout << "Q: " << quarters << endl;
    cout << "D: " << dimes << endl;
    cout << "N: " << nickels << endl;
    cout << "P: " << pennies << endl;

    return 0;
}

