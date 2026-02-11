//Modify the program in Figure 2.11 so that
//the accuracy of the entered estimate is confirmed.For any input, even if
//it is not 1 or 2, keep looping until the user enters
//the correct value.
// Look for the img in Chapter2 folder

#include <iostream>

using namespace std;

int main() {

    int passes;
    int failures;
    int student;
    int studentsResult;

    const int STUDNETS_AMOUNT = 10;

    student = 1;
    passes = 0;
    failures = 0;

    while (student <= STUDNETS_AMOUNT) {

        cout << "Enter result( 1 = passes 2 = failed and Enter only numbers): ";
        cin >> studentsResult;

        if (studentsResult == 1) {

            passes += 1;
            student++;
        
        }
        else if (studentsResult == 2) {
           
            failures += 1;
            student++;
        
        }
        else {
            
            cout << "Incorrect input\n";
        
        }

    }

    cout << "Passed: " << passes << "\n"
        << "Failed: " << failures << "\n";

    if (passes > 8) {

        cout << "Increase tuition";
    
    }
    
    return 0;
}