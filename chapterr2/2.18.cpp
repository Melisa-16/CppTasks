//One large chemical company pays its sellers on
//a commission basis.The seller gets $200 per week plus 9 %
//of weekly sales.For example, a seller who sold
//$5, 000 worth of chemicals in a week will receive $200 plus 9 % of $5, 000.,
//that is, only $650.Develop a C++ program that should
//enter for each seller the volume of his sales for the last
//week, calculate and display his earnings on the screen.The data
//is entered one at a time for each seller

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double salesVolume;

    const int WEEKLY_SALARY = 200;
    const double PERCENT_OF_WEEKLY_SALES = .09;//%

    cout << "Enter sales volume in dollars (-1 to end): ";
    cin >> salesVolume;


    while (salesVolume != -1) {

        double sellerEarningsDuringWeek = WEEKLY_SALARY + (salesVolume *  PERCENT_OF_WEEKLY_SALES);

        cout << "Earnings: $" <<fixed <<setprecision(2)<< sellerEarningsDuringWeek << "\n" << "\n";

        cout << "Enter sales volume in dollars (-1 to end): ";
        cin >> salesVolume;

    }

    return 0;
}