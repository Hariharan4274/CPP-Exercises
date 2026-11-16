#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number < 0) {
        number = -number;
    }
    int count = 0;
    do {
        count++;
        number = number / 10;
    } while (number != 0);
    cout << count << endl;
    return 0;
}
