//Due to the high price of gasoline,drivers are concerned about the fuel
//costs of their cars.One driver recorded the miles traveled and the amount 
//of gasoline used from several fuel tanks.Develop a C++ program that prompts
//the user to enter the miles traveled and gasoline used from each tank.
//The program should calculate and display the number of miles per gallon
//for each tank.After entering all the data, the program should calculate
//and display the average number of miles per gallon for all tanks.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double gallonUsed;
    double milesDriven;
    double milePerGallon;
    double totalMilePerGallon; 

    int counter;

    totalMilePerGallon = 0;
    counter = 0;

    cout << "Enter gallon (or -1 to end): ";
    cin >> gallonUsed;

    while (gallonUsed != -1) {

        cout << "Enter path traveled (in miles): ";
        cin >> milesDriven;

        milePerGallon = milesDriven / gallonUsed;

        cout << "Miles per gallon for this tank: " << fixed << setprecision(6) << milePerGallon << endl;

        totalMilePerGallon += milePerGallon;

        counter++;

        cout << "\nEnter gallon (or -1 to end): ";
        cin >> gallonUsed;

    }

    

    if (counter > 0) {

        double averageMilesPerGallon = totalMilePerGallon / counter;
        
        cout << "\nAverage miles per gallon: " << fixed << setprecision(6) << averageMilesPerGallon << endl;
    
    }
    else {

        cout << "No data entered." << endl;
    
    }

    return 0;
}