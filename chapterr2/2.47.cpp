//Write a program that prints the following stencils one
//below the other.Use the for loop to generate the stencils.All
//asterisks(*) must be printed using a single operator like cout <<
//**; (as a result, the asterisks will be printed in rows).Hint:
//The last two stencils require each line to start
//with the appropriate number of spaces.A more complex task :
//Combine your codes to solve four separate problems into
//a single program that prints all four stencils side
//by side using nested for loops.
//(A)        (B)        (C)         (D)
//*          ********   ********           *
//**         *******     *******          **
//***        ******       ******         ***
//****       *****         *****        **** 
//*****      ****           ****       ***** 
//******     ***             ***      ******
//*******    **               **     *******
//********   *                 *    ********

#include <iostream>

using namespace std;

int main() {

    const int NUMBER_OF_ROWS = 8;
    const int NUMBER_OF_COLUMNS = 8;

 
    // (A)

    for (int i = 0; i < NUMBER_OF_ROWS; i++) {

        for (int j = 0; j < NUMBER_OF_COLUMNS; j++) {

            if (j <= i) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }

        cout << endl;
    }

    cout << endl; 

    // (B) 

    for (int i = 0; i < NUMBER_OF_ROWS; i++) {

        for (int j = 0; j < NUMBER_OF_COLUMNS; j++) {

            if (j <= NUMBER_OF_ROWS - 1 - i) {
                cout << "*";
            }
            else {
                cout << " ";
            }

        }
        
        cout << endl;
    }

    cout << endl;

    // (C) 

    for (int i = 0; i < NUMBER_OF_ROWS; i++) {

        for (int j = 0; j < NUMBER_OF_COLUMNS; j++) {

            if (j >= i) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }

        cout << endl;
    }

    cout << endl;

    // (D) 
   
    for (int i = 0; i < NUMBER_OF_ROWS; i++) {

        for (int j = 0; j < NUMBER_OF_COLUMNS; j++) {

            if (j >= NUMBER_OF_ROWS - 1 - i) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        
        }

        cout << endl;
    }




    for (int i = 0; i < NUMBER_OF_ROWS; i++) {

        // (A) 
        
        for (int j = 0; j < NUMBER_OF_COLUMNS; j++) {

            if (j <= i) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
    
        cout << "     "; 

        // (B) 

        for (int j = 0; j < NUMBER_OF_COLUMNS; j++) {

            if (j <= NUMBER_OF_ROWS - 1 - i) {
                cout << "*";
            }
            else {
                cout << " ";
            }

        }

        cout << "     ";

        // (C) 

        for (int j = 0; j < NUMBER_OF_COLUMNS; j++) {

            if (j >= i) {
                cout << "*";
            }
            else {
                cout << " ";
            }

        }

        cout << "     ";

        // (D) 

        for (int j = 0; j < NUMBER_OF_COLUMNS; j++) {

            if (j >= NUMBER_OF_COLUMNS - 1 - i) {
                cout << "*";
            }
            else {
                cout << " ";
            }

        }

        cout << endl; 
    }

    return 0;
}
