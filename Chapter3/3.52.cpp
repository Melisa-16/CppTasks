//write cmath maths function

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(4);

    cout << "cmath function\t\t\t\tDescription\n"
        "---------------------------------------------------------------\n"
        "sqrt(4) = " << sqrt(4) << "\t\tSquare root of 4\n"

        "exp(10) = " << exp(10) << "\t\tExponential of 10 (e^10)\n"
        
        "log(1) = " << log(1) << "\t\t\tLogarithm of 1 (e base)\n"

        "log10(100) = " << log10(100) << "\t\tLogarithm of 100(10 base)\n"
        
        "fabs(-124) = " << fabs(-124) << "\t\tAbsolute value of -124\n"
        
        "ceil(23.4) = " << ceil(23.4) << "\t\tRound 23.4 up to smallest integer,not less than 23.4\n"
        
        "floor(-12.3) = " << floor(-12.3) << "\t\tRound -12.3 down to biggest integer,not greater than -12.3\n"
        
        "pow(2,5) = " << pow(2, 5) << "\t\t2 to the power of 5\n"
        
        "fmod(134,3) = " << fmod(134, 3) << "\t\tRemainder of 134/3\n"
        
        "sin(1.0) = " << sin(1.0) << "\t\tSine of 1 radian\n"
        
        "cos(0.0) = " << cos(0.0) << "\t\tCosine of 0 radians\n"
        
        "tan(0.0) = " << tan(0.0) << "\t\tTangent of 0 radians\n";

    return 0;
}
