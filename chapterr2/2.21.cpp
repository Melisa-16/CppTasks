//Write program that will output this table( use \t )
//N	    10 * N	100 * N	 1000 * N
//
//1   	10	    100	     1000
//2	    20	    200 	 2000
//3	    30	    300	     3000
//4	    40	    400	     4000
//5	    50	    500	     5000

#include <iostream>

using namespace std;

int main() {

    cout << "N\t10*N\t100*N\t1000*N\n\n";

    const int MAXIMUM_NUMBER = 5;

    for (int number = 1;number <= MAXIMUM_NUMBER;number++) {

        cout << number << "\t"
             << number * 10 << "\t"
             << number * 100 << "\t"
             << number * 1000 << "\n";
    
    }

    return 0;
}