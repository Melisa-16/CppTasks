#include <iostream>
#include "TictacToe.h"

using namespace std;

int main() {
	TicTacToe game;
	int player = 1;
	int row;
	int column;
	int moves = 0;

	const int MAXIMUM_MOVES_AMOUNT = 9;

	while (moves < MAXIMUM_MOVES_AMOUNT) {
		game.print();
		cout << "Player " << player << " enter row and column (0 - 2): ";
		cin >> row >> column;

		if (game.moveMaker(player, row, column)) {
			moves++;

			int winner = game.winnerChecker();
			if (winner != 0) {
				game.print();
				cout << "Player " << winner << " wins!\n";
				break;
			}

			player = (player == 1) ? 2 : 1;
		}
		else {
			cout << "Cell already taken! Try again.\n";
		}
	}

	if (moves == MAXIMUM_MOVES_AMOUNT && game.winnerChecker() == 0) {
		game.print();
		cout << "Draw!\n";
	}

	return 0;
}