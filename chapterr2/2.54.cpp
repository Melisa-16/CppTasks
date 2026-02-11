//Calculate the value and based on an infinite series
//Print a table that shows how the value is
//approximated by one term of this series, two terms, three, etc.
//How many terms of the series did it take to get the value 3.14 ?
//3.141 ? 3.1415 ? 3.14159 ?

#include <iostream>

using namespace std;

int main() {

    int number = 0;

    double numberPI ;
    numberPI = 0.0;
    
    int numberSign;
    numberSign = 1;


    const double NUMERATOR_FOR_SERIES = 4.0;

    while ( number >= 0 ) {

        int oddNumber = 2 * number + 1;

        numberPI += numberSign * NUMERATOR_FOR_SERIES / oddNumber;
        
        numberSign *= -1;

      

        cout << number << "\t" << numberPI << endl;

        
        number++;
    }

    
    return 0;
}