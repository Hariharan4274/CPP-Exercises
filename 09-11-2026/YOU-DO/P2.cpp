#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    int i = a;
    if (b > a) {
        i = b;
    }
    while (i % a != 0 || i % b != 0) {
        i++;
    }
    cout << "LCM = " << i << endl;
    return 0;
}
