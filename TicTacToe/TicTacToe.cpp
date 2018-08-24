/*********************************************************************
** Author: Muneef Seidi
** Date: 11/29/2016
** Description: This is the implementation code for TicTacToe.hpp. This
programs uses a board and plays tic tac toe on the board.
*********************************************************************/
#include <iostream>
#include "TicTacToe.hpp"
using namespace std;

TicTacToe::TicTacToe(char z) {		//constructor to indicate if 'x' or 'o'
   					//has first move.
   if (z == 'x') {
      playerTurn = 1;
   }
   else {
      playerTurn = 2;
   }      
}

void TicTacToe:: play() {		//method to play.
   int x, y;
   do {
      cout << "Player " << playerTurn << " enter the location you want "<< endl;
      cin >> x >> y;					//asks player for location.
      if (board.makeMove(x,y,playerTurn) == true){   
         board.print();
         if (playerTurn == 1) {				//loops player moves and sends to board.
            playerTurn = 2;
         }
         else {
            playerTurn = 1;
         }
      }
      else {
         cout << "Spot already occupied, try again" << endl;	//tells player if requested location is already occupied.
      }   
   }while(board.gameState() == 3);   
   if (board.gameState() == 0) {
      cout << "\nPlayer 1 Won!" << endl;		//indicates if player 1 has won.
   }
   else if (board.gameState() == 1) {
      cout << "\nPlayer 2 Won!" << endl;		//indicates if player 2 has won.
   }
   else if (board.gameState() == 2) {			//indicates if the game is a draw.
      cout << "\nDRAW!" << endl;
   }            

}   

int main() {						//main method to test tic tac toe game.
   int player;
   cout << "Player 1 - X and Player 2 - O" << endl;
   cout << "Which player wants to start first? 1 or 2? " << endl;
   cin >> player;
   if (player == 1) {
      TicTacToe t ('x');
      t.play();
   }
   else {
      TicTacToe t ('o');
      t.play();
   }  
}
