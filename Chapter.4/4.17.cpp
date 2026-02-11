////Write a program that simulates rolling two dice. The
//program should use rand to roll the first dice and
//then rand again to throw the second dice.
//Then the sum of the two values should be calculated.Use a one - dimensional array,
//to count how many times each possible
//amount falls out.Print the result in tabulated format.Determine
//the acceptability of the results


#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {

	srand(time(NULL));

	const int  DICE_SIDES = 6;
	const int  ARRAY_SIZE = 13;
	const int  MINIMUM_SUM = 2;
	const int  MAXIMUM_SUM = 12;

	int sumOfDices[DICE_SIDES][DICE_SIDES];

	int frequancyOfEachSum[ARRAY_SIZE] = { 0 };

	for (int i = 0;i < DICE_SIDES;i++) {

		for (int j = 0;j < DICE_SIDES;j++) {

			int firstDice = rand() % DICE_SIDES + 1;
			int secondDice = rand() % DICE_SIDES + 1;

			sumOfDices[i][j] = firstDice + secondDice;
			cout << sumOfDices[i][j] << "\t\t";

			++frequancyOfEachSum[sumOfDices[i][j]];
		}

		cout << endl << endl;

	}

	cout << endl << endl << "Sum\t    Occured Times\n";


	for (int i = MINIMUM_SUM;i <= MAXIMUM_SUM;i++) {

		cout << i << "\t\t" << frequancyOfEachSum[i] << endl;

	}

	return 0;
}