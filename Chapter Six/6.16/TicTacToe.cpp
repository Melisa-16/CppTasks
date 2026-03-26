#include <iostream>
#include "TictacToe.h"

using namespace std;

TicTacToe::TicTacToe() {
	for (int i = 0;i < BOARD_SIZE;i++) {
		for (int j = 0;j < BOARD_SIZE;j++) {
			board[i][j] = 0;
		}
	}
}
void TicTacToe::print() {
	for (int i = 0;i < BOARD_SIZE;i++) {
		for (int j = 0;j < BOARD_SIZE;j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}
bool TicTacToe::moveMaker(int player,int row,int column) {
	if (board[row][column] == 0) {
		board[row][column] = player;
		return true;
	}
	return false;
}
int TicTacToe::winnerChecker() {
	const int BOARD_SIZE = 3;
	
	for (int i = 0;i < BOARD_SIZE;i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != 0) {
			return board[i][0];
		}
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != 0) {
			return board[0][i];
		}
	}

	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != 0) {
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != 0) {
		return board[0][2];
	}

	return 0;
}
