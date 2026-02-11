//write program that give multiplication expression with two numbers ( < 10)
//then ask for answer,if inputed number is right it output 'Good work' if not 'No.Please try again' 
// and ask for answer again until it is right 

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {

	int firstNumber;
	int secondNumber;
	int rightAnswer;
	int answer;

	const int MAXIMUM_REMAINDER = 10;

	srand(time(NULL));

	firstNumber = rand() % MAXIMUM_REMAINDER;

	secondNumber = rand() % MAXIMUM_REMAINDER;

	rightAnswer = firstNumber * secondNumber;


	cout << "What is " << firstNumber << " times " << secondNumber << " ?\nAnswer: ";
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