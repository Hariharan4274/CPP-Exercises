#include <iostream>
using namespace std;
int main() {
    long long n;
    int count = 0;
    cin >> n;
    if (n < 0) n = -n;
    if (n == 0) count = 1;
    else {
        while (n > 0) {
            count++;
            n /= 10;
        }
    }
    cout << count;
    return 0;
}
