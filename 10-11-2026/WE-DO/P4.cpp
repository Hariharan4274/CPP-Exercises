#include <iostream>
using namespace std;
int main() {
    int n;
    long long sum;
    cin >> n;
    if (n < 1 || n > 1000000) cout << "Invalid input";
    else {
        sum = (long long)n * (n + 1) / 2;
        cout << "Sum of numbers from 1 to " << n << " is " << sum;
    }
    return 0;
}
