#include <iostream>

using namespace std;

int main() {
    const int ARRAY_SIZE = 20;

    int floor[ARRAY_SIZE][ARRAY_SIZE] = { 0 };

    enum Direction { LEFT, RIGHT, UP, DOWN };
    Direction direction = RIGHT;

    int command;
    int x = 0;
    int y = 0;

    bool penDown = false;

    cout << "Turtle commands: \n"
        << "1 - pen up\n"
        << "2 - pen down\n"
        << "3 - turn right\n"
        << "4 - turn left\n"
        << "5 - moving\n"
        << "6 - printing\n"
        << "7 - go UP\n"
        << "8 - go DOWN\n"
        << "9 - ending\n"
        << "Enter command: ";

    cin >> command;

    while (command != 9) {
        if (command == 1) {
            penDown = false;
        }
        else if (command == 2) {
            penDown = true;
        }
        else if (command == 3) {
            direction = RIGHT;
        }
        else if (command == 4) {
            direction = LEFT;
        }
        else if (command == 7) {
            direction = UP;
        }
        else if (command == 8) {
            direction = DOWN;
        }
        else if (command == 5) {
            int steps;
            cout << "Enter steps: ";
            cin >> steps;

            for (int i = 0; i < steps; i++) {

                if (penDown == true) {
                    floor[y][x] = 1;
                }
                if (direction == RIGHT && x + 1 < ARRAY_SIZE) {
                    x++;
                }
                else if (direction == LEFT && x - 1 >= 0) {
                    x--;
                }
                else if (direction == UP && y - 1 >= 0) {
                    y--;
                }
                else if (direction == DOWN && y + 1 < ARRAY_SIZE){
                    y++;
                }
            }

            if (penDown == true ) {
                floor[y][x] = 1;
            }
        }
        else if (command == 6) {
            for (int i = 0; i < ARRAY_SIZE; i++) {
                for (int j = 0; j < ARRAY_SIZE; j++) {
                    if (floor[i][j] == 1) {
                        cout << "*";
                    }
                    else {
                        cout << " ";
                    }
                }
                cout << endl;
            }
        }
        cout << "Enter command for turtle: ";
        cin >> command;
    }

    return 0;
}