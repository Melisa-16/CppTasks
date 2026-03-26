#include <iostream>

using namespace std;

int main() {
    const int ARRAY_SIZE = 8;

    int board[ARRAY_SIZE][ARRAY_SIZE] = { 0 };

    int horizontal[ARRAY_SIZE] = { 2,1,-1,-2,-2,-1,1,2 };
    int vertical[ARRAY_SIZE] = { -1,-2,-2,-1,1,2,2,1 };

    int startRow = 0;
    int startColumn = 0;
    int currentRow = 0;
    int currentColumn = 0;

    board[currentRow][currentColumn] = 1;

    const int BOARD_SQUARES_AMOUNT = 64;

    int movesDone = 1;

    for (int i = 0; i < BOARD_SQUARES_AMOUNT; i++) {

        int moveNumber;
        cout << "Enter command (1 - 8): ";
        cin >> moveNumber;

        currentRow += vertical[moveNumber - 1];
        currentColumn += horizontal[moveNumber - 1];

        if (currentRow < 0 || currentRow >= ARRAY_SIZE || currentColumn < 0 || currentColumn >= ARRAY_SIZE) {
            cout << "Invalid move! Out of board." << endl;
            break;
        }

        if (board[currentRow][currentColumn] == 1) {
            cout << "Game over! Already visited." << endl;
            break;
        }

        board[currentRow][currentColumn] = 1;
        movesDone++;

        if (movesDone == BOARD_SQUARES_AMOUNT) {

            int rowsDiff = currentRow - startRow;
            int columnsDiff = currentColumn - startColumn;

            if ((rowsDiff == 1 && columnsDiff == 2) ||
                (rowsDiff == 2 && columnsDiff == 1)) {

                cout << "Closed game!" << endl;
            }
        }
    }

    for (int i = 0; i < ARRAY_SIZE; i++) {
        for (int j = 0; j < ARRAY_SIZE; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
