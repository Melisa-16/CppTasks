//The company wants to transmit data over the phone, but it is concerned
//about the possibility of phone interception.All transmitted data are four -
//digit integers.The company asked
//you to write a program that should encrypt this data
//so that it can be transmitted with greater security.Your
//program should read four - digit integers and
//encrypt them as follows : replace each digit with the value
//of the remainder of the division : (digit plus 7) / 10. Then
//swap the first digit with the third and the second with the fourth.Then
//print the received encrypted integer.Write a separate
//program that enters encrypted four - digit
//integers and decrypts them, getting the original numbers.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int originalNumber; 
    int encryptedNumber;

    const int ADDING_NUMBER = 7;
    const int DIVIDING_NUMBER = 10;


    cout << "Enter 4-digit number: ";
    cin >> originalNumber;

    int  thousandsDigit = originalNumber / 1000;
    int  hundredsDigit = (originalNumber - thousandsDigit * 1000) / 100;
    int  tensDigit = (originalNumber - thousandsDigit * 1000 - hundredsDigit * 100) / 10;
    int  onesDigit = originalNumber - thousandsDigit * 1000 - hundredsDigit * 100 - tensDigit * 10;

    int thousandsEncryptedDigit = (thousandsDigit + ADDING_NUMBER) % DIVIDING_NUMBER;
    int hundredsEncryptedDigit = (hundredsDigit + ADDING_NUMBER) % DIVIDING_NUMBER;
    int tensEncryptedDigit = (tensDigit + ADDING_NUMBER) % DIVIDING_NUMBER;
    int onesEncryptedDigit = (onesDigit + ADDING_NUMBER) % DIVIDING_NUMBER;

    if (thousandsEncryptedDigit == 0 || hundredsEncryptedDigit == 0 || tensEncryptedDigit == 0 || onesEncryptedDigit== 0) {

        cout << (tensEncryptedDigit == 0 ? 0 : tensEncryptedDigit)
             << (onesEncryptedDigit == 0 ? 0 : onesEncryptedDigit)
             << (thousandsEncryptedDigit == 0 ? 0 : thousandsEncryptedDigit)
             << (hundredsEncryptedDigit == 0 ? 0 : hundredsEncryptedDigit) << endl;

    }
    else {

        encryptedNumber = tensEncryptedDigit * 1000 + onesEncryptedDigit * 100 + thousandsEncryptedDigit * 10 + hundredsEncryptedDigit;
        cout << "Encrypted number: " << encryptedNumber << endl;
    
    }

    cout << "Lets change encrypted to original number\n"
        << "Enter encryped number: ";

    int originalEncrypted;

    cin >> originalEncrypted;

    int  encryptedThousands = originalEncrypted / 1000;
    int  encrytedHundreds= (originalEncrypted - encryptedThousands * 1000) / 100;
    int  encyptedTens = (originalEncrypted - encryptedThousands * 1000 - encrytedHundreds * 100) / 10;
    int  encryptedOnes = originalEncrypted - encryptedThousands * 1000 - encrytedHundreds * 100 - encyptedTens * 10;

    int decryptedThousands = (encryptedThousands + DIVIDING_NUMBER - ADDING_NUMBER) % DIVIDING_NUMBER;
    int decryptedHundreds = (encrytedHundreds + DIVIDING_NUMBER - ADDING_NUMBER) % DIVIDING_NUMBER;
    int decryptedTens = (encyptedTens + DIVIDING_NUMBER - ADDING_NUMBER) % DIVIDING_NUMBER;
    int decryptedOnes = (encryptedOnes + DIVIDING_NUMBER - ADDING_NUMBER) % DIVIDING_NUMBER;


    if (decryptedThousands == 0 || decryptedHundreds == 0 || decryptedTens == 0 || decryptedOnes == 0) {

        cout << "Decrypted number: "
            << (decryptedTens == 0 ? 0 : decryptedTens)
            << (decryptedOnes == 0 ? 0 : decryptedOnes)
            << (decryptedThousands == 0 ? 0 : decryptedThousands)
            << (decryptedHundreds == 0 ? 0 : decryptedHundreds) << endl;

    }
    else {
        
        int decryptedNumber = decryptedTens * 1000 + decryptedOnes * 100 + decryptedThousands * 10 + decryptedHundreds;
        cout << "Decrypted number: " << decryptedNumber << endl;
    
    }

    return 0;
}