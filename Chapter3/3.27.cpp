//write program that has functions which convert 
//a) celsius to fahrenheit
//b) fahrenheit to celsius 
//c) output tables that write 1-100 celsius into fahrenheit
//   and 32 - 212 fahrenheit into celsius 

#include <iostream>

using namespace std;

double celsius(double);

double fahrenheit(double);

int main() {

	double tempreture;

	cout << "Enter tempreture in fahrenheit: ";
	cin >> tempreture;

	double tempretureByCelsius;

	tempretureByCelsius = celsius(tempreture);

	cout << "\nFahrenheit equivalent in Celsius: "
		<< tempretureByCelsius << endl << endl;


	cout << "Enter temnpreture in celsius: ";
	cin >> tempreture;

	double tempretureByFahrenheit;

	tempretureByFahrenheit = fahrenheit(tempreture);

	cout << "\nCelsius equivalent in Fahrenheit: " << tempretureByFahrenheit;



	cout << endl << endl;



	const int CELSIUS_SCALE_MAXIMUM_VALUE = 100;
	const int FAHRENHEIT_SCALE_MAXIMUM_VALUE = 212;

	const int MINIMUM_CELSIUS_VALUE = 1;
	const int FAHRENHEIT_MINIMUM_VALUE = 32;


	cout << "Degree In Celsius\tFahrenheit equivalent\n";

	for (int i = MINIMUM_CELSIUS_VALUE;i <= CELSIUS_SCALE_MAXIMUM_VALUE;i++) {

		cout << i << "\t\t\t" << fahrenheit(i) << endl;

	}

	cout << "\n\nDegree in Fahrenheit\tCelsius Equivalent\n";

	for (int i = FAHRENHEIT_MINIMUM_VALUE;i <= FAHRENHEIT_SCALE_MAXIMUM_VALUE;i++) {

		cout << i << "\t\t\t" << celsius(i) << endl;

	}

	return 0;

}

double celsius(double fahrenheit) {

	const int DIFFERENCE_BETWEEN_SCALES = 32;
	const double SCALE_FACTOR = 5.0 / 9.0;


	double tempretureByCelsius;

	tempretureByCelsius = (fahrenheit - DIFFERENCE_BETWEEN_SCALES) * SCALE_FACTOR;

	return tempretureByCelsius;

}

double fahrenheit(double celsius) {

	const int DIFFERENCE_BETWEEN_SCALES = 32;
	const double FAHRENHEIT_SCALE_FACTOR = 9.0 / 5.0;


	double tempretureByFahrenheit;

	tempretureByFahrenheit = celsius * FAHRENHEIT_SCALE_FACTOR + DIFFERENCE_BETWEEN_SCALES;

	return tempretureByFahrenheit;

}
