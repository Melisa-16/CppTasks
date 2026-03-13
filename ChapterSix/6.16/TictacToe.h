#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe {
private:
	static const int BOARD_SIZE = 3;
	int board[BOARD_SIZE][BOARD_SIZE];
public:
	TicTacToe();
	void print();
	bool moveMaker(int,int,int);
	int winnerChecker();
};

#endif 
