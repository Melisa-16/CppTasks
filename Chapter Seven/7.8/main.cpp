#include <iostream>
#include "savingAccounts.h"

using namespace std;

int main() {
    SavingsAccounts saver1(2000.0);
    SavingsAccounts saver2(3000.0);

    SavingsAccounts::modifyInterestRate(0.03);

    cout << "After 3% interest:\n";

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    saver1.showBalance();
    saver2.showBalance();

    SavingsAccounts::modifyInterestRate(0.04);

    cout << "\nAfter 4% interest:\n";

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    saver1.showBalance();
    saver2.showBalance();

    return 0;
}