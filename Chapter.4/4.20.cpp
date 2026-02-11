//Write a C++ program that simulates seat assignment in a train compartment with 10 seats.
//The first 5 seats(indexes 0–4) are reserved for smokers, and the last 5 seats(indexes 5–9)
//are reserved for non - smokers.Use an integer array of size 10 to represent the compartment, where:
//    0 means the seat is free
//    1 means the seat is occupied
//Ask the user to enter :
//    1 for smokers
//    2 for non - smokers
//Randomly assign a free seat:
//    Smokers - seats 1–5
//    Non - smokers - seats 6–10


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));


    const int MAXIMUM_AMOUNT_OF_PASSANGERS = 10;

    int comparment[MAXIMUM_AMOUNT_OF_PASSANGERS] = { 0 };
    int identification;
    int seat;
    bool freeSeatAvailability;

    for (int count = 0;count < MAXIMUM_AMOUNT_OF_PASSANGERS;count++) {

        cout << "Enter 1 for 'smokers' and 2 for 'non-smokers'\n";
        cin >> identification;

        if (identification == 1) {

            seat = rand() % 5;

            while (comparment[seat] == 1) {
                seat = rand() % 5;
            }

            comparment[seat]++;

        }
        else if (identification == 2) {

            seat = 5 + rand() % 5;

            while (comparment[seat] == 1) {
                seat = 5 + rand() % 5;
            }

            comparment[seat]++;
        }
        else {
            cout << "Invalid choice\n";
        }
        
    }

    for (int i = 0;i < MAXIMUM_AMOUNT_OF_PASSANGERS;i++) {
        cout << comparment[i]<<" ";
    }
    return 0;
}
