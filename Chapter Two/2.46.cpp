//Modify the compound interest calculation program in the section
//2.13 (Fig. 2.21) so that the calculation is repeated for the bids 5 %, 6 %,
//7 %, 8 %, 9 % and 10 % .Use the for loop to vary the bid.

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

    const double INITIAL_PRINCIPAL = 1000.0;
    
    const double MINIMUM_RATE = .05; //%
    const double MAXIMUM_RATE = .10; //%
    const double YEARLY_RATE_DIFFERENCE = .01; //%

    for (double rate = MINIMUM_RATE; rate <= MAXIMUM_RATE; rate += YEARLY_RATE_DIFFERENCE ) {

        cout << "\nRate: " << rate * 100 << "%" << endl;
        cout << "Year" << setw(21) << "Deposit amount" << endl;

        for (int year = 1; year <= 10; year++) {

            double amount = INITIAL_PRINCIPAL * pow(1.0 + rate, year);

            cout << setw(3) << year 
                << setiosflags(ios::fixed | ios::showpoint) 
                << setw(21) << setprecision(2) << amount << endl;

        }
    }

    return 0;
}