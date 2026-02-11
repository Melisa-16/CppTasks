////Write a program that reads three non-zero values of the type
//float determines and prints whether they can represent the sides
//of a triangle.

#include <iostream>

using namespace std;

int main() {

    float firstSideOfTraingle;
    float secondSideOfTriangle;
    float thirdSideOfTriangle;

    cout << "Enter first number: ";
    cin >> firstSideOfTraingle;

    cout << "Enter second number: ";
    cin >> secondSideOfTriangle;
    
    cout << "Enter third number: ";
    cin >> thirdSideOfTriangle;

  
    if ( firstSideOfTraingle > 0 && secondSideOfTriangle > 0 && thirdSideOfTriangle > 0 ) {

        if ( (firstSideOfTraingle < secondSideOfTriangle + thirdSideOfTriangle) && 
            (secondSideOfTriangle < firstSideOfTraingle + thirdSideOfTriangle) && 
            (thirdSideOfTriangle < firstSideOfTraingle + secondSideOfTriangle) )
        {
            cout << "You can make a triangle with these numbers.\n";
        }
        else 
        {
            cout << "You can't create a triangle.\n";
        }

     
    }
    else
    {
        cout << "Invalid input.At least one number was zero or negative.\n";
    }

    return 0;
}
