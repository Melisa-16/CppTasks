//find if word is palindrome using recursive function testPalindrome

#include <iostream>

using namespace std;


bool testPalindrome(char [], int, int);

int main() {

    
    char array[] = { 'l', 'e', 'v', 'e', 'l' };
    
    int firstIndex = 0;
    int lastIndex = 4;

    cout << "Word 'level' is ";

    bool answer = testPalindrome(array, firstIndex, lastIndex);

    if (answer == 1) {
        cout << "palindrome";

    }
    else {
        cout << "not palindrome";
    }

    return 0;
}

bool testPalindrome(char array[], int firstIndex, int lastIndex) {

        if(firstIndex == lastIndex) {
            return 1;
        }
        if (array[firstIndex] != array[lastIndex]) {
            return 0;
        }
       
    return testPalindrome(array, firstIndex + 1, lastIndex - 1);

}