//write function that calculate circle area

#include <iostream>

using namespace std;

inline void circleArea();

int main() {

    circleArea();
    
    return 0;
}

inline void circleArea() {
    double radius;

    cout << "Enter circle radius: ";
    cin >> radius;

    double areaOfCircle;

    const double M_PI = 3.1415;

    areaOfCircle = M_PI * radius * radius;

    cout << "Area of the circle: " << areaOfCircle << endl;
}