#include <iostream>
using namespace std;
int main() {
    int n;
    unsigned long long fact = 1;
    cin >> n;
    if (n < 0) cout << "Invalid input (negative number)";
    else if (n > 20) cout << "Invalid input (exceeds maximum limit)";
    else {
        for (int i = 1; i <= n; i++) fact *= i;
        cout << "Factorial of " << n << " is " << fact;
    }
    return 0;
}
