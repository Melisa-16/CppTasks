//The trading house sells five different products, the retail price
//of which is : product 1 - $2.98, product 2 - $4.50, product 3 -
//$9.98, product 4 - $4.49 and product 5 - $6.87.Write a
//program that reads a sequence of pairs of numbers meaning :
//1. Product number;
//2. The quantity sold per day.
//Your program should use a switch operator that
//can determine the retail price of each product.The program
//should calculate and display the total retail value
//of all products sold during the week.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int productIndex;

    double totalAmountSoldPerWeek;
    double quantitySoldPerDay;
    double productPrice;
    

    productPrice = 0;
    totalAmountSoldPerWeek = 0;

    const double FIRST_PRODUCT_PRICE = 2.98;
    const double SECOND_PRODUCT_PRICE = 4.50;
    const double THIRD_PRODUCT_PRICE = 9.98;
    const double FOURTH_PRODUCT_PRICE = 4.49;
    const double FIFTH_PRODUCT_PRICE = 6.87;

    cout << fixed << setprecision(2);

    cout << "Enter product number (-1 to end): ";
    cin >> productIndex;

    while (productIndex != -1) {

        cout << "Quantity sold per day: ";
        cin >> quantitySoldPerDay;

        switch (productIndex) {

            case 1: productPrice = FIRST_PRODUCT_PRICE; break;
            case 2: productPrice = SECOND_PRODUCT_PRICE; break;
            case 3: productPrice = THIRD_PRODUCT_PRICE; break;
            case 4: productPrice = FOURTH_PRODUCT_PRICE; break;
            case 5: productPrice = FIFTH_PRODUCT_PRICE; break;

            default:
                cout << "Invalid product number! Try again.\n"
                    << "Enter product number (-1 to end): ";

                cin >> productIndex;
                continue;
        }

        double weeklyAmountSold = productPrice * quantitySoldPerDay * 7;
        totalAmountSoldPerWeek += weeklyAmountSold;

        cout << "\nEnter product number (-1 to end): ";
        cin >> productIndex;

    }

    cout << "Total weekly retail value: $" << totalAmountSoldPerWeek << endl;

    return 0;
}
