#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int reverse = 0;
    while (number > 0) {
        reverse = reverse * 10 + number % 10;
        number = number / 10;
    }
    cout << reverse << endl;
    return 0;
}
