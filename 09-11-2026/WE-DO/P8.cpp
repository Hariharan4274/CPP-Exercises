#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    long long a = 0;
    long long b = 1;
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}
