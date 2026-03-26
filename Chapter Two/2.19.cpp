//Develop a C++ program that should determine
//the salary for each of several employees.
//The company pays each employee a time - based salary for the first
//40 hours of work and pays one and a half times for all working
//hours over 40. You are given a list of the company's employees, the number of hours
//worked by each in the last week, and the hourly rate
//every employee.The program must enter this data for
//each employee, calculate and display his total
//salary

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double workedHours;
    double hourlyRate;
    double weeklySalary;

    const int STANDART_WORK_HOURS = 40;
    const double OVERTIME_RATE = 1.5; //%

    cout << "Enter  weekly working hours (-1 to end): ";
    cin >> workedHours;

    while (workedHours != -1) {

        cout << "Enter the worker\'s hourly rate($00.00) : ";
        cin >> hourlyRate;

        if (workedHours > STANDART_WORK_HOURS) {

            weeklySalary = (hourlyRate * STANDART_WORK_HOURS) + (workedHours - STANDART_WORK_HOURS) * hourlyRate * OVERTIME_RATE;
        
        }
        else {
            
            weeklySalary = hourlyRate * workedHours;
        
        }

        cout << "Salary:  $" <<fixed<<setprecision(2)<< weeklySalary << "\n";

        cout << "Enter  weekly working hours (-1 to end): ";
        cin >> workedHours;

    }

    return 0;
}