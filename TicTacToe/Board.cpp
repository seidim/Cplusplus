/*********************************************************************
** Author: Muneef Seidi
** Date: 11/29/2016
** Description: This is the implementation code for Board.hpp. This
program allows you to create a board and move along the board using
x and y coordinates. It also helps declare winners and prints the board.
*********************************************************************/
#include <iostream>
#include "Board.hpp"
using namespace std;

Board::Board() {		//creates a 3x3 board.
   for ( int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         board[i][j] = '.';
      }  
   }
}

bool Board:: makeMove(int x, int y, int player) {	//method to make move.
   if (board[x][y] == '.') {
      if (player == 1) {		//if unoccupied for player 1, mark X for location.
         board[x][y] = 'X';
         return true;
      }
      else {
         board[x][y] = 'O';		//if unoccupied for player 2, mark O for location.
         return true;
      }
   }
   else {
      return false;			//if location already occupied, return false.
   }
}  

status Board:: gameState() {
   status result;
   char check;				//method that returns a value from defined enum to indicate
   int spaces = 0;				//if 'x' won, 'o' won, it's a draw, or game is unfinished.
   for (int i = 0; i < 3; i++) {
         for( int j = 0; j<3; j++) {
            if (board[i][j] == '.') {
               spaces += 1;               
            }
          }  
   }
   if (board[0][0] == board[0][1] && board[0][1] == board[0][2]) {
      check = board[0][0];
   }
   else if (board[1][0] == board[1][1] && board[1][1] == board[1][2]) {
      check = board[1][0];
   }
   else if (board[2][0] == board[2][1] && board[2][1] == board[2][2]) {
      check = board[2][0];
   }
   else if (board[0][0] == board[1][0] && board[1][0] == board[2][0]) {
      check = board[0][0];
   } 
   else if (board[0][1] == board[1][1] && board[1][1] == board[2][1]) {
      check = board[0][1];
   }
   else if (board[0][2] == board[1][2] && board[1][2] == board[2][2]) {
      check = board[0][2];
   }
   else if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
      check = board[0][0];
   }
   else if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
      check = board[0][2];
   }
   if ( check == 'X') {
      result = X_WON;  
   }
   else if ( check == 'O' ) {
      result = O_WON;
   }
   else if ( spaces == 0 ) {
      result = DRAW; 
   }
   else {
      result = UNFINISHED;
   }
   return result;               
}

void Board:: print() {				//method to print board to screen.
   cout << "\n  0 1 2  " << endl;
   cout << "0 "<< board[0][0] << " " << board[0][1] << " " << board[0][2] << endl;
   cout << "1 "<< board[1][0] << " " << board[1][1] << " " << board[1][2] << endl;
   cout << "2 "<< board[2][0] << " " << board[2][1] << " " << board[2][2] << "\n" << endl;
}   
