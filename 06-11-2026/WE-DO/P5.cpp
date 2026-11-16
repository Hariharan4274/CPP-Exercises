#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number > 0) {
        number++;
    }
    cout << number << endl;
    return 0;
}
