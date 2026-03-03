#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {

    srand(time(NULL));

    const int BOARD_SIZE = 8;
    int board[BOARD_SIZE][BOARD_SIZE];

    int horizontal[BOARD_SIZE] = { 2,1,-1,-2,-2,-1,1,2 };
    int vertical[BOARD_SIZE] = { -1,-2,-2,-1,1,2,2,1 };

    const int BOARD_SQUARES_AMOUNT = 64;
    int results[BOARD_SQUARES_AMOUNT] = { 0 };

    const int MAXIMUM_CHANCES_AMOUNT= 1000;

    for (int t = 0; t < MAXIMUM_CHANCES_AMOUNT; t++) {

        for (int i = 0; i < BOARD_SIZE; i++) {
            for (int j = 0; j < BOARD_SIZE; j++) {
                board[i][j] = 0;
            }
        }

        int currentRow = rand() % 8;
        int currentColumn = rand() % 8;

        board[currentRow][currentColumn] = 1;

        int movesDone = 1;

        for (int step = 1; step < BOARD_SQUARES_AMOUNT; step++) {

            int moveNumber = rand() % 8;

            int newRow = currentRow + vertical[moveNumber];
            int newColumn = currentColumn + horizontal[moveNumber];

            if (newRow >= 0 && newRow < 8 &&
                newColumn >= 0 && newColumn < 8 &&
                board[newRow][newColumn] == 0) {

                currentRow = newRow;
                currentColumn = newColumn;

                board[currentRow][currentColumn] = 1;
                movesDone++;
            }
            else {
                break;
            }
        }   
            results[movesDone - 1]++;        
    }

    cout << "Moves and its frequancy after 1000 plays" << endl;

    for (int i = 0; i < BOARD_SQUARES_AMOUNT; i++) {
        if (results[i] > 0)
            cout << i + 1 << " moves: " << results[i] << endl;
    }

    return 0;
}