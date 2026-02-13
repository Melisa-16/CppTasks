//Sellers receive $200 per week plus 9 percent of
//that week's sales. For example, a salesperson with a weekly sale
//of $5, 000 gets $200 plus
//9 percent of the $5000:$650.
//Write a program that determines
//how many salesperson have received salaries in each of
//the following ranges:
//1. $200 - $299
//2. $300 - $399
//3. $400 - $499
//4. $500 - $599
//5. $600 - $699
//6. $700 - $799
//7. $800 - $899
//8. $900 - $999
//9. $1000 and more

#include <iostream>

using namespace std;

int main() {

    const int MAXIMUM_WORKERS_AMOUNT = 10;
    const int MAXIMUM_RANGES_AMOUNT = 9;

    int payedWorkersCounter[MAXIMUM_RANGES_AMOUNT] = { 0 };
    double payments[MAXIMUM_WORKERS_AMOUNT];


    for (int i = 0; i < MAXIMUM_WORKERS_AMOUNT; i++) {
        cout << "Enter weekly payment of worker " << i + 1 << ": ";
        cin >> payments[i];
    }

    const int WEEKLY_PAYMENT = 200;
    const double PERCENT_OF_WEEKLY_WORK = 0.09; // 9 %

    const int FIRST_RANGE_MAXIMUM = 299;
    const int SECOND_RANGE_MAXIMUM = 399;
    const int THIRD_RANGE_MAXIMUM = 499;
    const int FOURTH_RANGE_MAXIMUM = 599;
    const int FIFTH_RANGE_MAXIMUM = 699;
    const int SIXTH_RANGE_MAXIMUM = 799;
    const int SEVENTH_RANGE_MAXIMUM = 899;
    const int EIGHTH_RANGE_MAXIMUM = 999;

    for (int i = 0; i < MAXIMUM_WORKERS_AMOUNT; i++) {
        double totalPayment = WEEKLY_PAYMENT + payments[i] * PERCENT_OF_WEEKLY_WORK;
        int index = (totalPayment / 100) - 2;

        if (index > 8) {
            index = 8;
        }
        ++payedWorkersCounter[index];
    }

    cout << "Range \t\tAmount of workers\n";

    for (int i = 0;i < MAXIMUM_RANGES_AMOUNT;i++) {
        cout << i + 1 << "\t\t\t" << payedWorkersCounter[i] << endl;
    }
    return 0;
}
