//Write function that find hypotenuse of 3 triangles 
// 
// triangle     side1   side2
//    1          3.0     4.0
//    2          5.0     12.0
//    3          8.0     15.0

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double hypotenuseOfRightAngleTriangle(double, double);

int main() {

	cout << "Right-angle triangle hypotenuse with sides 3 and 4 = "
		<< hypotenuseOfRightAngleTriangle(3.0, 4.0)<<endl<<endl

	    << "Right-angle triangle hypotenuse with sides 5 and 12 = "
		<< hypotenuseOfRightAngleTriangle(5.0, 12.0)<<endl<<endl

		<< "Right-angle triangle hypotenuse with sides 8 and 15 = "
		<< hypotenuseOfRightAngleTriangle(8.0, 15.0)<<endl<<endl;

    
	return 0;
}

double hypotenuseOfRightAngleTriangle(double firstSide, double secondSide) {

	double hypotenuse = sqrt( pow(firstSide, 2) + pow(secondSide, 2) );

	return hypotenuse;
}