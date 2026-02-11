    //remake 3.35 program so it will output one of this feedbacks if answer is right
	// 
    //      Excellent!
    //      So good!
    //      Amazing work!
    //      Keep working just as well
    //
    //  and if answer  is not right
	// 
	//      No.Please try again
	//      Wrong.Try again
	//      Don't give up
	//      Not.Keep on trying 

    #include <iostream>
	#include <cstdlib>
	#include <time.h>

	using namespace std;

	const int REMAINDER_AMOUNT = 4;

	void goodAnswersFeedBackGenerator();

	void falseAnswersFeedbackGenerator();

	int main() {

		int firstNumber;
		int secondNumber;
		int rightAnswer;
		int answer;
		int feedback;

		const int MAXIMUM_REMAINDER = 9;


		srand(time(NULL));

		firstNumber = rand() % MAXIMUM_REMAINDER;
		secondNumber = rand() % MAXIMUM_REMAINDER;

		rightAnswer = firstNumber * secondNumber;


		cout << "What is " << firstNumber << " times " << secondNumber << " ?\nAnswer: ";
		cin >> answer;

		if (answer == rightAnswer) {

			goodAnswersFeedBackGenerator();

		}
		else {
			while (answer != rightAnswer) {
				falseAnswersFeedbackGenerator();

				cin >> answer;

			}

		}

		goodAnswersFeedBackGenerator();

		return 0;


	}


	void goodAnswersFeedBackGenerator() {
		int feedback;

		feedback = rand() % REMAINDER_AMOUNT;

		switch (feedback) {
		case 0:
			cout << "Excellent!";
			break;
		case 1:
			cout << "So good!";
			break;
		case 2:
			cout << "Amazing work!";
			break;
		case 3:
			cout << "Keep working just as well";
			break;

		}
	}

	void falseAnswersFeedbackGenerator() {

		int feedback;

		feedback = rand() % REMAINDER_AMOUNT;

		switch (feedback) {
		case 0:
			cout << "No.Please try again.\nAnswer:";
			break;
		case 1:
			cout << "Wrong.Try again\nAnswer: ";
			break;
		case 2:
			cout << "Don't give up!\nAnswer: ";
			break;
		case 3:
			cout << "Not.Keep on trying\nAnswer:";
			break;
		}

	}