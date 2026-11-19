#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cin >> n;
    if (n < 1 || n > 1000000) cout << "Invalid input";
    else {
        for (int i = 2; i <= n; i += 2) sum += i;
        cout << sum;
    }
    return 0;
}
