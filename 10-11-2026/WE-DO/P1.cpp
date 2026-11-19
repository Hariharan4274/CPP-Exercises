#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n < 1 || n > 1000000) cout << "Invalid input";
    else {
        for (int i = 1; i <= n; i++) cout << i << " ";
    }
    return 0;
}
