#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    cout << "Odd numbers from 1 to " << n << ": ";
    for (int i = 1; i <= n; i = i + 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
