////Write a program that reads the radius (as a type value
//float), calculates and prints the diameter, circumference and
//area of the circle.For p, use the value 3.14159.

#include <iostream>

using namespace std;

int main() {
    
    float radiusOfCircle;
    float diameterOfCircle;
    float circumferenceOfCircle;
    float areaOfCircle;

    const float PI = 3.14159;
    
    cout << "Enter radius of circle: ";
    cin >> radiusOfCircle;

    diameterOfCircle = 2 * radiusOfCircle;

    circumferenceOfCircle = 2 * radiusOfCircle * PI;
    
    areaOfCircle = PI * radiusOfCircle * radiusOfCircle;

    cout << "Circle Diameter: " << diameterOfCircle << "\n"
        << "Circle Circumference: " << circumferenceOfCircle << "\n"
        << "Circle Area: " << areaOfCircle << "\n";

    return 0;
}