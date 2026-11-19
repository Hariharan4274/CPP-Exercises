#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n < 1 || n > 1000000) cout << "Invalid input";
    else {
        double average = (n + 1) / 2.0;
        cout << "Average of numbers from 1 to " << n << " is " << average;
    }
    return 0;
}
