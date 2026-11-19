#include <iostream>
using namespace std;
int main() {
    long long n, reverse = 0;
    cin >> n;
    if (n < 0) cout << "Invalid Input";
    else {
        while (n > 0) {
            reverse = reverse * 10 + n % 10;
            n /= 10;
        }
        cout << reverse;
    }
    return 0;
}
