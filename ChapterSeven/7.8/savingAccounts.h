#ifndef SAVINGACCOUNTS_H
#define SAVINGACCOUNTS_H

class SavingsAccounts {
private:
    double savingsBalance;
    static double annualInterestRate;
public:
    SavingsAccounts(double);
    void calculateMonthlyInterest();
    static void modifyInterestRate(double);
    void showBalance();
};

#endif

