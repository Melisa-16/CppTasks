//Write a program that reads the side size of a square and
//then prints an empty square of a given
//size with asterisks and spaces.Your program should work for any size
//set in the range of 1 - 20

#include <iostream>

using namespace std;

int main() {

    int squareSide;
    
    cout << "Enter size of square side: ";
    cin >> squareSide;
    
    if (squareSide > 1 && squareSide <= 20) {

        for (int i = 1;i <= squareSide;i++) {

            for (int j = 1;j <= squareSide;j++) {

                if (  ( i == 1  ||  i == squareSide ) || ( j == 1  || j == squareSide )  ) {

                    cout << "* ";
                
                }
                else {
                    
                    cout << "  ";
                
                }

            }

            cout << "\n";
        }

    }
    else {

        cout << "Enter number between 1 and 20";
    
    }

    return 0;
}