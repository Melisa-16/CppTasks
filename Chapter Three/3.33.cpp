//write function qualityPoints,that input average mark of student then identify student point
//if inputed number is
//90-100 return 4
//80-89  return 3
//70-79  return 2
//60-69  return 1
//smaller than 60 return 0


#include <iostream>

using namespace std;

int qualityPoints(int);

int main() {
	int averageMark;
	int studentPoints;

	studentPoints = qualityPoints(averageMark);
	cout << "Student's points: " << studentPoints;

	return 0;
}

int qualityPoints(int averageMark) {
	cout << "Enter average mark of student: ";
	cin >> averageMark;

	if (averageMark >= 90 && averageMark <= 100) {
		return 4;
	}
	else if (averageMark >= 80 && averageMark <= 89) {
		return 3;
	}
	else if (averageMark >= 70 && averageMark <= 79) {
		return 2;
	}
	else if (averageMark >= 60 && averageMark <= 69) {
		return 1;
	}
	else {
		return 0;
	}
}