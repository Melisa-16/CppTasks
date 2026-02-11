//write function distance which calculate distance between two point (x;y) and (x1;x2)

#include <iostream>
#include <cmath>
using namespace std;

float distance(float,float,float,float);

int main() {
   
	float XFirstCoordinate;
	float YFirstCoordinate;

	float XSecondCoordinate;
	float YSecondCoordinate;

	cout << "Enter first coordinates\nX: ";
	cin >> XFirstCoordinate;

	cout << "Y: ";
	cin >> YFirstCoordinate;

	cout << "Enter second coordinates\nX: ";
	cin >> XSecondCoordinate;

	cout << "Y: ";
	cin >> YSecondCoordinate;

	float distanceBetweenPoints;

	distanceBetweenPoints = distance(XFirstCoordinate, YFirstCoordinate, XSecondCoordinate, YSecondCoordinate);

	cout << "Distance between points = " << distanceBetweenPoints;
	
	return 0;

}

float distance(float x1, float y1, float x2, float y2) {

	float distanceBetweenPoints;

	distanceBetweenPoints = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

	return distanceBetweenPoints;
}
