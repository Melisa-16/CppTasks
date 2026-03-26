//rewrite 3.35 so that player can enter his level
// 1 -> beginner (numbers used in expression is smaller than 10)
// 2 -> intermediete (numbers used in expression is smaller than 100)
// 3 -> proffessional (numbers used in expression is smaller than 1000)
// 
// and what type of expression he wants
// 
// 1 -> addition
// 2 -> substraction
// 3 -> multiplication
// 4 -> division
// 5 -> mix of them

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int firstNumber;
int secondNumber;
int answer;
int level;
int scaleFactor;
int calculationType;
double rightAnswer;

int scaleFactorGenerator(int);
void calculationTypeGenerator(int);

int main() {

	cout << "Enter your level (1 = beginner 2 = intermediete 3 = proffessional): ";
	cin >> level;

    scaleFactor = scaleFactorGenerator(level);

	calculationTypeGenerator(int);
	
	srand(time(NULL));
	firstNumber = rand() % scaleFactor;
	secondNumber = rand() % scaleFactor;

	cout << "Enter maths calculation type (1 - addition 2 - substraction 3 - multiplication 4 - division 5 - mix of them): ";
    cin >> calculationType;

	calculationTypeGenerator(calculationType);	
	cin >> answer;

	if (answer == rightAnswer) {
		cout << "Good Work!";
	}
	else {
		while (answer != rightAnswer) {
			cout << "No.Please try again\nAnswer: ";
			cin >> answer;
		}
		cout << "Good Work!";
	}

	return 0;
}

int scaleFactorGenerator(int level) {
	switch (level) {
		case 1: 
			scaleFactor = 10;
			break;
		case 2: 
			scaleFactor = 100;
			break;
		case 3: 
			scaleFactor = 1000;
			break;
	}
	return scaleFactor;
}

void calculationTypeGenerator(int calculationType) {
	if (calculationType == 5) {
		calculationType = rand() % 4 + 1;
	}

	switch (calculationType) {

	case 1:
		rightAnswer = firstNumber + secondNumber;

		cout << "What is " << firstNumber << " + " << secondNumber << " ?\nAnswer: ";
		break;
	case 2:
		rightAnswer = firstNumber - secondNumber;

		cout << "What is " << firstNumber << " - " << secondNumber << " ?\nAnswer: ";
		break;
	case 3:
		rightAnswer = firstNumber * secondNumber;

		cout << "What is " << firstNumber << " * " << secondNumber << " ?\nAnswer: ";
		break;
	case 4: 
		rightAnswer = firstNumber / secondNumber;

		cout << "What is " << firstNumber << " / " << secondNumber << " ?\nAnswer: ";
		break;
	}
}