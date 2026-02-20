#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));

	const int MAXIMUM_REMAINDER = 10;

	int firstNumber;
	int secondNumber;
	int rightAnswer;
	int answer;

	int totalAnswers = 0;
	int rightAnswersAmount = 0;

	int const MAXIMUM_AMOUNT_OF_CHANCES = 10;

	while (totalAnswers < MAXIMUM_AMOUNT_OF_CHANCES) {

		firstNumber = rand() % MAXIMUM_REMAINDER;
		secondNumber = rand() % MAXIMUM_REMAINDER;
		rightAnswer = firstNumber * secondNumber;

		cout << "What is " << firstNumber << " times " << secondNumber << " ?\nAnswer: ";
		cin >> answer;

		while (answer != rightAnswer && totalAnswers < MAXIMUM_AMOUNT_OF_CHANCES) {
			cout << "Answer: ";
			cin >> answer;
			totalAnswers++;

			if (answer == rightAnswer) {
				cout << "Good Work!" << endl;
				rightAnswersAmount++;
			}
		}
	}

	int const MAXIMUM_PECENT = 100; 

	double percentCorrect = (double)rightAnswersAmount / totalAnswers * MAXIMUM_PECENT;

	if (percentCorrect < 75) {
		cout << "Please, go and get help from your lecturer." << endl;
	}

	return 0;
}