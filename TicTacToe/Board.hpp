/*********************************************************************
** Author: Muneef Seidi
** Date: 11/29/2016 
** Description: This is the header file for Board.cpp. This is the
interface for creating the board object, moving on the board, declaring
winner, and printing the board.
*********************************************************************/
#include <iostream>
using namespace std;
#ifndef BOARD_HPP
#define BOARD_HPP

enum status { X_WON, O_WON, DRAW, UNFINISHED};		//enum definition.

class Board {				//member variables.
   private:
      char board[3][3];

   public:				//prototypes for member functions.
      Board();
      bool makeMove(int x, int y, int player);
      status gameState();
      void print();

};
#endif
