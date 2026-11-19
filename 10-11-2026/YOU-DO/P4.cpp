#include <iostream>
using namespace std;
int main() {
    int base, exponent;
    long long result = 1;
    cin >> base >> exponent;
    for (int i = 1; i <= exponent; i++) result *= base;
    cout << result;
    return 0;
}
