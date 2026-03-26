//Remake 2.20 and find the two largest
//values out of 10 numbers
//Note: You can enter each number only once.

#include <iostream>

using namespace std;

int main() {

    double number;
    double largest;
    double secondLargest;

    const int TOTAL_AMOUNT_OF_SALES = 10;

    cout << "Enter sales volume: ";
    cin >> number;

    secondLargest = number;

    cout << "Enter sales volume: ";
    cin >> number;

    largest = number;

    if (secondLargest > largest) {

        double num = largest;

        largest = secondLargest;
        
        secondLargest = num;
        

    }

    for (int counter = 1 ;counter <= TOTAL_AMOUNT_OF_SALES - 2;counter++) {
        
        cout << "Enter sales volume: ";
        cin >> number;

        if (number > largest) {

            secondLargest = largest;
            largest = number;
        
        }
        else if (number > secondLargest) {
            
            secondLargest = number;

        }
    }

    cout << "Largest sales volume: " << largest << "\n"
         << "Second largest volume: " << secondLargest;

    return 0;
}