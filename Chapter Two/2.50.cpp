//Calculate average grade of class,entering letter grades,where A = 4,B =3 and so on

#include <iostream>

using namespace std;

int main() {

	int letterGrade; 
	int sum;
	int count;

	sum = 0;
	count = 0;

	const int A_LETTER_GRADE_IN_NUMBER = 4;
	const int B_LETTER_GRADE_IN_NUMBER = 3;
	const int C_LETTER_GRADE_IN_NUMBER = 2;
	const int D_LETTER_GRADE_IN_NUMBER = 1;
	const int F_LETTER_GRADE_IN_NUMBER = 0;

	cout << "Enter letter grade." << endl
		<< "Enter EOF symbol for finishing.";

	while ((letterGrade = cin.get()) != EOF) {

		switch (letterGrade) {

		case 'A':case 'a': 
		{
			sum += A_LETTER_GRADE_IN_NUMBER;
			++count;
			break;
		}
		case 'B':case 'b': 
		{
			sum += B_LETTER_GRADE_IN_NUMBER;
			++count;
			break;
		}
		case 'C':case 'c':
		{
			sum += C_LETTER_GRADE_IN_NUMBER;
			++count;
			break;
		}
		case 'D':case 'd': 
		{
			sum += D_LETTER_GRADE_IN_NUMBER;
			++count;
			break;
		}
		case 'F':case 'f':
		{
			sum += F_LETTER_GRADE_IN_NUMBER;
			++count;
			break;
		}
		case '\n':case ' ':
		{
			break;
		}
		default:
			cout << "Invalid grade inputed."
				<< "Enter new grade." << endl;

		}
		
	}
	if (count > 0) {
		
		double averageGrade = (double)sum / count;

		cout << "Average grade:" << averageGrade << endl;
	}
	else
	{
		cout << "Nothing was entered" << endl;
	}

	return 0;
}