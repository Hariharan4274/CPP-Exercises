#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    long long sum = 0;
    for (int i = 2; i <= n; i = i + 2) {
        sum = sum + i;
    }
    cout << sum << endl;
    return 0;
}
