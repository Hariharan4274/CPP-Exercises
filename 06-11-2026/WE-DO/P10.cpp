#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 10 == 0) {
        cout << "Divisible by 10" << endl;
    } else {
        cout << "Not divisible by 10" << endl;
    }
    return 0;
}
