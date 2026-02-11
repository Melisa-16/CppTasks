//median of array,which has even elements amount

#include <iostream>
#include <iomanip>


using namespace std;

 
void mean(const int[], int);
void median(int[], int);
void mode(int[], int[], int);
void bubbleSort(int[], int);
void printArray(const int[], int);


int main() {

    const int RESPONSE_SIZE = 100;

    int frequancy[10] = { 0 };

    int response[RESPONSE_SIZE] = { 6,7,8,9,8,7,8,9,8,9,
                                    7,8,9,5,9,8,7,8,7,8,
                                    6,7,8,9,3,9,8,7,8,7,
                                    7,8,9,8,9,8,9,7,8,9,
                                    6,7,8,7,8,7,9,8,9,2,
                                    7,8,9,8,9,8,9,7,5,3,
                                    5,6,7,2,5,3,9,4,6,4,
                                    7,8,9,6,8,7,8,9,7,8,
                                    7,4,4,2,5,3,8,7,5,6,
                                    4,5,6,1,6,5,7,8,7,4};

    mean(response, RESPONSE_SIZE);
    median(response, RESPONSE_SIZE);
    mode(frequancy, response, RESPONSE_SIZE);


    return 0;
}

void mean(const int answer[], int arraySize) {

    int total = 0;

    cout << "*********\n" << "Average\n"
        << "*********\n";

    for (int j = 0;j < arraySize;j++) {
        total += answer[j];
    }

    cout << "Average is average value \n"
        << "of elements. Average is \n"
        << "equal to sum of data,divided into amount\n"
        << "of elements (" << arraySize << ").Average value for\n"
        << "this calculation = "
        << total << " / " << arraySize << " = "
        << setiosflags(ios::fixed | ios::showpoint)
        << setprecision(4) << (float)total / arraySize
        << endl << endl;
}

void median(int answer[], int size) {

    cout << endl << "*********\n" << " Median\n"
        << "*********\n"
        << "Unsorted array of responses";

    printArray(answer, size);
    bubbleSort(answer, size);

    cout << "\n\nSorted response array";

    printArray(answer, size);

    double median = ( answer[size / 2 - 1] + answer[size / 2] ) / 2.0 ;

    cout << "\n\nMedian is the average of elements "
        << size / 2 << " and " << size / 2 + 1
        << " of the sorted array."
        << "\nMedian = "
        << median
        << endl << endl;


}

void mode(int freq[], int answer[], int size) {

    int largest = 0, modeValue = 0;

    cout << "\n*********\n" << "Mode\n"
        << "*********" << endl;

    for (int rating = 1;rating <= 9;rating++) {

        freq[rating] = 0;

    }

    for (int j = 0;j < size;j++) {
        ++freq[answer[j]];
    }

    cout << "Answer" << setw(11) << "Frequancy"
        << setw(19) << "Histogram\n\n" << setw(54)
        << "1   1   2   2\n" << setw(54)
        << "5   0   5   0   5\n\n";

    for (int rating = 1;rating <= 9;rating++) {

        cout << setw(8) << rating << setw(11)
            << freq[rating] << "              ";

        if (freq[rating] > largest) {

            largest = freq[rating];
            modeValue = rating;

        }

        for (int h = 1;h <= freq[rating];h++) {
            cout << "*";

        }

        cout << endl;
    }

    cout << "Mode - the most common value\n"
        << "For this calculation is " << modeValue
        << ",this number occurs " << largest << " times.\n";
}

void bubbleSort(int a[], int size) {

    int hold;

    for (int pass = 1;pass < size;pass++) {

        for (int j = 0;j < size - 1;j++) {

            if (a[j] > a[j + 1]) {

                hold = a[j];

                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }
}

void printArray(const int a[], int size) {

    for (int j = 0;j < size;j++) {

        if (j % 20 == 0) {
            cout << endl;
        }

        cout << setw(2) << a[j];

    }
}