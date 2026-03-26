#include <iostream>
using namespace std;

int main() {
    const int ARRAY_COLUMNS_AMOUNT = 5; // sellers
    const int ARRAY_ROWS_AMOUNT = 6;    // products

    double sales[ARRAY_ROWS_AMOUNT][ARRAY_COLUMNS_AMOUNT] = { 0 };

    int seller, product;
    double dailySale;

    int count = 1;
    while (count <= 5) {  
        cout << "Enter seller number (1-5): ";
        cin >> seller;
        cout << "Enter product number (1-6): ";
        cin >> product;
        cout << "Enter daily sale: ";
        cin >> dailySale;

        sales[product - 1][seller - 1] += dailySale;
        count++;
    }

    // Row totals
    for (int i = 0; i < ARRAY_ROWS_AMOUNT; i++) {
        double rowSum = 0;
        for (int j = 0; j < ARRAY_COLUMNS_AMOUNT - 1; j++) {
            rowSum += sales[i][j];
        }
        sales[i][ARRAY_COLUMNS_AMOUNT - 1] = rowSum; 
    }

    // Column totals
    for (int j = 0; j < ARRAY_COLUMNS_AMOUNT; j++) {
        double columnSum = 0;
        for (int i = 0; i < ARRAY_ROWS_AMOUNT - 1; i++) { 
            columnSum += sales[i][j];
        }
        sales[ARRAY_ROWS_AMOUNT - 1][j] = columnSum; 
    }

    cout << "\nSales table with totals:\n";
    for (int i = 0; i < ARRAY_ROWS_AMOUNT; i++) {
        for (int j = 0; j < ARRAY_COLUMNS_AMOUNT; j++) {
            cout << sales[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}