/*********************************************************************
** Author: Muneef Seidi
** Date: 10/3/2016
** Description: This program prompts the user to enter an integer that
they or another user will have to guess. It will then display either 
"too high" or "too low" for the integer they guessed based on their guess.
It will then display how many guesses they made to get it right.
*********************************************************************/
#include <iostream>
using namespace std;

int main() {
   cout << "Enter the number for the player to guess. \n";	// get input from user.
   double num;
   cin >> num;
   cout << "Enter your guess. \n";
   double guess;
   int count = 1;
   cin >> guess;
   while (guess != num) {	// determine if guessed number matches original number input by user.
      if ( guess > num ) {
         cout << "Too high - try again. \n";	// display to user when guess is too high.
      }
      else {
         cout << "Too low - try again. \n";	// display to user when guess is too low.   
      }
      cin >> guess;
      count = count + 1;    
   }
   cout << "You guessed it in " << count << " tries. \n";   // display results.
}
