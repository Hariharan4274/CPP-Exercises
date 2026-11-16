#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number < 0) {
        number = -number;
    }
    int sum = 0;
    while (number > 0) {
        sum = sum + number % 10;
        number = number / 10;
    }
    cout << sum << endl;
    return 0;
}
