//use floor function to round 'y' to tenth,hundredths and thousandths

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double ADDING_NUMBER = 0.5;

double roundToInteger(double);
double roundToTenths(double);
double roundToHundredths(double);
double roundToThousandths(double);

int main() {

	double number;

	cout << "Enter number: ";
	cin >> number;

	cout << "\nRounded to the nearest integer: " << roundToInteger(number)
		 << "\nRounded to tenths: " <<fixed<<setprecision(1) << roundToTenths(number)	
		 << "\nRounded to hundredths: " << fixed << setprecision(2) << roundToHundredths(number)	
		 << "\nRounded to thousandths: " << fixed << setprecision(3) << roundToThousandths(number);

	return 0;
}

double roundToInteger(double number) {
	double y = floor(number + ADDING_NUMBER);
	return y;
}

double roundToTenths(double number) {
	const int TENTH_ROUNDING = 10;

	double y = floor(number * TENTH_ROUNDING + ADDING_NUMBER) / TENTH_ROUNDING;
	return y;

}

double roundToHundredths(double number) {
	const int HUNDREDTH_ROUNDING = 100;

	double y = floor(number * HUNDREDTH_ROUNDING + ADDING_NUMBER) / HUNDREDTH_ROUNDING;
	return y;
}

double roundToThousandths(double number) {
	const int THOUSANDTH_ROUNDING = 1000;

	double y = floor(number * THOUSANDTH_ROUNDING + ADDING_NUMBER) / THOUSANDTH_ROUNDING;
	return y;
}