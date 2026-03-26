//The company pays its employees either as managers(who
//receive a fixed weekly salary), or as hourly
//workers(who receive a fixed hourly wage
//for the first 40 working hours and an hourly rate of one and a half for over
//40 hours of work), or as commission
//workers(who receive $250 plus 5.7 % of the weekly
//sales amounts), or as piecework workers(who receive a fixed
//amount from each unit of production they produce - each
//piecework worker in this company produces only one type of product).
// Write a program for calculating the weekly payment
//of each employee.You don't know the number of employees in advance. Each type of
//employee has its own payment code : managers have code 1,
//frequent workers have code 2, commission
//workers have code 3, piecework workers have code 4. Use a switch based
//on these payment codes to calculate payments to each employee.In
//the switch structure, ask the user(the clerk who makes
//up the payroll) to enter the relevant data necessary
//to calculate the payment to the employee in accordance with his payment code.


#include <iostream>

using namespace std;

int main() {

    int payCode; 
    int employeeNumber;

    cout << "Enter number of employees or -1 to end : ";
    cin >> employeeNumber;

    while (employeeNumber != -1) {
 
            cout << "Enter pay code (1-Manager, 2-Hourly workers, 3-Commission workers, 4-Piece workers ): ";
            cin >> payCode;

            double weeklyPay = 0.0;

            switch (payCode) {
            case 1: {
                double salary;

                cout << "Enter weekly salary: $";
                cin >> salary;

                weeklyPay =  salary;
                break;
            }
            case 2: {
                
                double workedHours;
                double hourlyRate;

                const int STANDART_WORK_HOURS = 40;
                const double OVERTIME_RATE = 1.5; //%

                cout << "Enter hours worked: ";
                cin >> workedHours;
                cout << "Enter hourly rate: $";
                cin >> hourlyRate;

                if (workedHours <= STANDART_WORK_HOURS) {
                    weeklyPay = workedHours * hourlyRate;
                }
                else {
                    weeklyPay = STANDART_WORK_HOURS * hourlyRate + (workedHours - STANDART_WORK_HOURS ) * hourlyRate * OVERTIME_RATE;
                }
                break;
            }
            case 3: {

                double weeklySales;
                const int PAYMENT_FOR_WEEK = 250;
                const double PERCENT_FOR_WEEKLY_WORK = 0.057;

                cout << "Enter weekly sales: $";
                cin >> weeklySales;
                weeklyPay = (PAYMENT_FOR_WEEK + PERCENT_FOR_WEEKLY_WORK * weeklySales);
                break;

            }
            case 4: {
                int units;
                double payPerUnit;

                cout << "Enter number of units produced: ";
                cin >> units;
                cout << "Enter pay per unit: $";

                cin >> payPerUnit;
                weeklyPay = units * payPerUnit;
                break;
            }
            default:
                cout << "Invalid pay code!" << endl;
                continue;
            }

            cout << "Weekly pay: $" << weeklyPay << endl;
         
            cout << "Enter number of empolyees or  -1 to end : ";
            cin >> employeeNumber;
     }
    
  
    return 0;
}
