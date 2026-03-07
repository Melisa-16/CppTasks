#include <iostream>
#include "savingAccounts.h"

using namespace std;

const int MONTHS_AMOUNT = 12;

double SavingsAccounts::annualInterestRate = 0;

SavingsAccounts::SavingsAccounts(double balance) {
        savingsBalance = balance;
}

void SavingsAccounts::calculateMonthlyInterest() {
        double monthlyInterest = (savingsBalance * annualInterestRate) / MONTHS_AMOUNT;
        savingsBalance += monthlyInterest;
}

void SavingsAccounts::modifyInterestRate(double newRate) {
        annualInterestRate = newRate;
}
void SavingsAccounts::showBalance() {
        cout << "Balance = $" << savingsBalance << endl;
}


