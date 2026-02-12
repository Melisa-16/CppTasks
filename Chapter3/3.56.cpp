//write functions tripleCallByValue in which copy of variable cout is multiply 3 times than returned
// and tripleBYReference which change initial variable 

#include <iostream>

using namespace std;

int tripleCallByValue(int count);
void tripleByReference(int& cRef);

int main() {

    int number;
    cout << "Enter number: ";
    cin >> number;

    cout << "Number before tripleCallByValue " << number
         << "\nReturned number by tripleCallByValue " << tripleCallByValue(number)
         << "\nNumber after tripleCallByValue " << number;

    cout << "\n\nNumber before tripleByReference " << number;
 
    tripleByReference(number);

    cout << "\nNumber after tripleByReference " << number << endl << endl;

    return 0;
}

int tripleCallByValue(int count) {
    return count * 3;
}

void tripleByReference(int& cRef) {
    cRef *= 3;
}