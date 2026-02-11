//This loop is infinite,because  condition never gets false 

#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int number = 0;

    while (number >= 0) {

        int powerOfTwo = pow(2, number);

        cout << powerOfTwo << endl;
        
        number++;
    }

    return 0;
}