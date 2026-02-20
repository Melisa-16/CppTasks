#include <iostream>

using namespace std;

void hanoiTower(int disksAmount, int from, int to, int aux);


int main() {

    int disksAmount ;
    int removeDisksFrom;
    int removeDisksTo;
    int temporaryPeg;

    cout << "Enter number of disks: ";
    cin >> disksAmount;

    cout << "Enter ped from which disks should be removed ";
    cin >> removeDisksFrom;

    cout << "Enter ped to which disks should be removed ";
    cin >> removeDisksTo;

    cout << "Enter temporary peg ";
    cin >> temporaryPeg;

    hanoiTower(disksAmount, removeDisksFrom, removeDisksTo, temporaryPeg);
    return 0;

}

void hanoiTower(int n, int from, int to, int aux) {

    if (n == 1) {
        cout << from << "-> " << to << endl;
        return;
    }

    hanoiTower(n - 1, from, aux, to);


    cout << from << "-> " << to << endl;


    hanoiTower(n - 1, aux, to, from);
}