#include <iostream>
using namespace std;
int main() {
    int n;
    long long a = 0, b = 1, c;
    cin >> n;
    if (n < 1 || n > 50) cout << "Invalid input";
    else {
        for (int i = 1; i <= n; i++) {
            cout << a << " ";
            c = a + b;
            a = b;
            b = c;
        }
    }
    return 0;
}
