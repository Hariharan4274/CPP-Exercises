#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int last = number % 10;
    cout << "Last Digit: " << last << endl;
    return 0;
}
