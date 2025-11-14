//Write a Program that takes an integer 'defNumber' (1-7).  Use a Ternary to check if the number is valid (1-7).
// If valid , use a switch statement to print the weekday name. Else print "Invalid".//
#include <iostream>
using namespace std;
int main() {
    int defNumber;
    cout << "Enter an integer (1-7): ";
    cin >> defNumber;

    // Check if the number is valid using a ternary operator
    string validity = (defNumber >= 1 && defNumber <= 7) ? "valid" : "invalid";

    if (validity == "valid") {
        switch (defNumber) {
            case 1:
                cout << "Monday" << endl;
                break;
            case 2:
                cout << "Tuesday" << endl;
                break;
            case 3:
                cout << "Wednesday" << endl;
                break;
            case 4:
                cout << "Thursday" << endl;
                break;
            case 5:
                cout << "Friday" << endl;
                break;
            case 6:
                cout << "Saturday" << endl;
                break;
            case 7:
                cout << "Sunday" << endl;
                break;
        }
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}