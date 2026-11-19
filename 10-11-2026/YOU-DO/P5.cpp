#include <iostream>
using namespace std;
int main() {
    int n, count = 0, number = 1;
    cin >> n;
    while (count < n) {
        int factors = 0;
        for (int i = 1; i <= number; i++) {
            if (number % i == 0) factors++;
        }
        if (factors == 2) {
            count++;
            if (count == n) cout << number;
        }
        number++;
    }
    return 0;
}
