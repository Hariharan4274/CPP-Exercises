#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number < 0) {
        number = -number;
    }
    if (number >= 100 && number <= 999) {
        cout << "Yes, it is a three-digit number." << endl;
    } else {
        cout << "No, not a three-digit number." << endl;
    }
    return 0;
}
