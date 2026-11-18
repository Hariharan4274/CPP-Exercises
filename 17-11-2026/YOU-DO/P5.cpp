#include <iostream>
using namespace std;

void printBadges(int n) {
    if (n <= 0) {
        return;
    }
    printBadges(n - 1);
    if (n > 1) {
        cout << " / ";
    }
    
    cout << n;
}

int main() {
    int n;
    if (cin >> n && n >= 0 && n <= 20) {
        printBadges(n);
    }
    
    return 0;
}
