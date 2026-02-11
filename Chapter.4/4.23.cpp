#include <iostream>
using namespace std;

int main() {

    const int ARRAY_SIZE = 20;
    
    int floor[ARRAY_SIZE][ARRAY_SIZE] = { 0 };

    enum Direction { LEFT, RIGHT };
    Direction direction;

    int command;
    int x = 0, y = 0;
    bool penDown = false;

    cout << "Turtle commands: \n"
        << "1 - pen up\n"
        << "2 - pen down\n"
        << "3 - turn right\n"
        << "4 - turn left\n"
        << "5 - moving\n"
        << "6 - printing\n"
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
        else if (command == 5) {

            int steps;
            
            cout << "Enter steps: ";
            cin >> steps;

            for (int i = 0; i < steps; i++) {
                if (penDown == true) {
                    floor[y][x] = 1; 
                }

                if (direction == LEFT && y + 1 < ARRAY_SIZE) { 
                    y++;
                }
                else if (direction == RIGHT && x + 1 < ARRAY_SIZE) { 
                    x++; 
                }
                
            }


            if (penDown == true) { 
                floor[y][x] = 1; 
            }
        }
        else if (command == 6) {

            for (int i = 0; i < ARRAY_SIZE; i++) {

                for (int j = 0; j < ARRAY_SIZE; j++) {

                    cout << floor[i][j] << " ";
                
                }

                cout << endl;

            }

        }

        cout << "Enter command for turtle: ";
        cin >> command;

    }
    return 0;
}
