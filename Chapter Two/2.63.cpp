//Write program that will print "The Twelve Days of Christmas" using switch

#include <iostream>

using namespace std;

int main() {

    const int MAXIMUM_DAYS_AMOUNT = 12;

    for (int day = 1; day <= MAXIMUM_DAYS_AMOUNT; day++) {
        
        cout << "On the ";

        switch (day) {

            case 1: cout << "first day"; break;
            case 2: cout << "second day"; break;
            case 3: cout << "third day"; break;
            case 4: cout << "fourth day"; break;
            case 5: cout << "fifth day"; break;
            case 6: cout << "sixth day"; break;
            case 7: cout << "seventh day"; break;
            case 8: cout << "eight day"; break;
            case 9: cout << "ninth day"; break;
            case 10: cout << "tenth day"; break;
            case 11: cout << "eleventh day"; break;
            case 12: cout << "twelfth day"; break;
        
        }

        cout << " My true love gave to me\n";

      
        switch (day) {

            case 12: cout << "Twelve drummers drumming,\n";
            case 11: cout << "Eleven pipers piping,\n";
            case 10: cout << "Ten lords a-leaping,\n";
            case 9:  cout << "Nine ladies dancing,\n";
            case 8:  cout << "Eight maids a-milking,\n";
            case 7:  cout << "Seven swans a-swimming,\n";
            case 6:  cout << "Six geese a-laying,\n";
            case 5:  cout << "Five golden rings,\n";
            case 4:  cout << "Four calling birds,\n";
            case 3:  cout << "Three French hens,\n";
            case 2:  cout << "Two turtle doves,\n";
            case 1:  cout << "And a partridge in a pear tree.\n"; break;
        
        }

        cout << endl; 
    }

    return 0;
}
