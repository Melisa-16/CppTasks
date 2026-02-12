//Programm should calculate payment for parking
// till 3 hours - 2.0$
// over 3 hours - 2.0$ + 0.5$ for each overtime hour (even not ended hour)
// maximum payment - 10$ for 24 hours

#include <iostream>
#include <iomanip>

using namespace std;

double calculateCharges(double);

int main() {
    const int MAXIMUM_CARS_AMOUNT = 3;

    cout << "Car\t"
        << "Hours\t"
        << "Payment" << endl;

    for (int car = 1; car <= MAXIMUM_CARS_AMOUNT; car++) {
        cout << car << "\t";

        double parkedHours;
        cin >> parkedHours;

        double payment = calculateCharges(parkedHours);
        cout << "\t" << fixed << setprecision(2) << payment << endl;
    }

    return 0;
}

double calculateCharges(double parkedHours) {
    const int STANDARD_PARKING_HOURS = 3;
    const double MINIMUM_PAYMENT_FOR_THREE_HOURS = 2.0;
    const double OVERTIME_PAY = 0.5;
    const int DAYLY_PARKING_HOURS = 24;
    const int DAYLY_PARKING_PAYMENT = 10;

    double paymentForParking = MINIMUM_PAYMENT_FOR_THREE_HOURS;

    if (parkedHours > STANDARD_PARKING_HOURS) {
        paymentForParking += (parkedHours - STANDARD_PARKING_HOURS) * OVERTIME_PAY;
    }
    if (parkedHours == DAYLY_PARKING_HOURS) {
        paymentForParking = DAYLY_PARKING_PAYMENT;
    }

    return paymentForParking;

}
