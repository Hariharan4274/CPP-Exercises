#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b) {
        cout << "Greatest = " << a << endl;
    } else {
        cout << "Greatest = " << b << endl;
    }
    return 0;
}
