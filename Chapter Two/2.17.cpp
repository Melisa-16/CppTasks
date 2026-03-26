//Develop a C++ program that will determine
//whether the expenses of a client with a deposit account have exceeded
//the credit limit.The following data is known for each client :
//1. Account number(integer).
//2. Balance from the beginning of the month.
//3. The sum of all expenses of this client during the month.
//4. The sum of all receipts to the client's account during the month.
//5. Acceptable loan amount.
//The program must enter all this data, calculate a new balance
//(equal to the initial balance + expense - income) and determine
//whether the new balance has exceeded the customer's credit limit. 
//For those whose credit has been exceeded, the program should display the
//customer's account number, credit limit, new balance, and the message
//"Credit limit exceeded."

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int accountNumber;

    double balanceFromTheBeginningOfMonth;
    double expencesDuringMonth;
    double incomeDuringMonth;
    double accountCreditLimit;
    double newBalance;
    
    cout << "Enter account number(-1 to end):";
    cin >> accountNumber;


    while (accountNumber != -1) {

        cout << "Enter initial balance: ";
        cin >> balanceFromTheBeginningOfMonth;

        cout << "Enter amount of expences: ";
        cin >> expencesDuringMonth;
        
        cout << "Enter amount of income: ";
        cin >> incomeDuringMonth;
        
        cout << "Enter limit of credit: ";
        cin >> accountCreditLimit;

        newBalance = ( balanceFromTheBeginningOfMonth + expencesDuringMonth ) - incomeDuringMonth;

        if (newBalance > accountCreditLimit) {

            cout << "Account Number: "  << accountNumber << "\n"
                << "Limit of Credit: " << fixed << setprecision(2) << accountCreditLimit << "\n"
                << "New Balance: " << fixed << setprecision(2) << newBalance << "\n"
                << "Credit limit exceeded\n";
        }

        cout << "Enter account number(-1 to end):";
        cin >> accountNumber;
    }

    return 0;
}