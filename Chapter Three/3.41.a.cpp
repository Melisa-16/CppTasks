//write program for fibonacci numbers.First two numbers are 0 and 1.Next numbers are sum of two last numbers 
// 0 1 1 2 3 5 8 13 21 ...

#include <iostream>

using namespace std;

int main() {
	int maximumAmount;

	cout << "Enter amount for fibonacci numbers: ";
	cin >> maximumAmount;

	int firstFibonacciNumber = 0;
	int secondFibonacciNumber = 1;

	cout << firstFibonacciNumber << "\n" << secondFibonacciNumber<<"\n";

	for (int number = 3;number <= maximumAmount;number++) {

		int fibonacciNumber;
		fibonacciNumber = firstFibonacciNumber + secondFibonacciNumber;

		cout << fibonacciNumber << "\n";
		
		firstFibonacciNumber = secondFibonacciNumber;
		secondFibonacciNumber = fibonacciNumber;
	}

	return 0;
}