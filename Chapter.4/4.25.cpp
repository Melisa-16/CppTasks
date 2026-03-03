#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {

    srand(time(NULL));

    const int MAXIMUM_STEPS = 64;
    const int BOARD_SIZE = 8;

    int board[BOARD_SIZE][BOARD_SIZE] = { 0 };
    int horizontal[BOARD_SIZE] = { 2,1,-1,-2,-2,-1,1,2 };
    int vertical[BOARD_SIZE] = { -1,-2,-2,-1,1,2,2,1 };

    int currentRow = 0;
    int currentColumn = 0;
    int movedDone = 0;

    board[currentRow][currentColumn] = 1;

    for (int i = 1; i < MAXIMUM_STEPS; i++) {

        int moveNumber = rand() % BOARD_SIZE;

        currentRow += vertical[moveNumber];
        currentColumn += horizontal[moveNumber];

        if (currentRow >= 0 && currentRow < BOARD_SIZE &&
            currentColumn >= 0 && currentColumn < BOARD_SIZE &&
            board[currentRow][currentColumn] == 0) {

            board[currentRow][currentColumn] = 1;
            movedDone++;
        }
        else {
            continue;
        }
    }

    cout << "Moved Done: " << movedDone << endl << "Board: " << endl;

    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}