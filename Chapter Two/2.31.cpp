//Write programm that output:
// * * * * * * * * 
//  * * * * * * * *
// * * * * * * * * 
//  * * * * * * * *
// * * * * * * * * 
//  * * * * * * * *
// * * * * * * * * 
//  * * * * * * * * 

#include <iostream>

using namespace std;

int main() {

    const int NUMBER_OF_SYMBOLS_PER_ROW = 16;
    const int NUMBER_OF_SYMBOLS_PER_COLUMN = 8;

    for (int i = 1;i <= NUMBER_OF_SYMBOLS_PER_COLUMN;i++) {

        for (int j = 1;j <= NUMBER_OF_SYMBOLS_PER_ROW;j++) {

            if ( (i % 2 == 1 && j % 2 == 1) || (i % 2 == 0 && j % 2 == 0) ) {

                cout << "*";
            
            }
            else {
 
                cout << " ";
            
            }

        }

        cout << "\n";

    }

    return 0;
}