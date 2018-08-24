/*********************************************************************
** Author: Muneef Seidi
** Date: 11/29/2016
** Description: This is the header file for TicTacToe.cpp. This is the 
interface that uses board to create a tic tac toe game and plays it.
*********************************************************************/

#include <iostream>
#include "Board.hpp"
using namespace std;
#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

class TicTacToe {		//member variables.
   private:
      Board board;
      int playerTurn;


   public:			//member function prototypes.
      TicTacToe(char z);
      void play();

};
#endif

