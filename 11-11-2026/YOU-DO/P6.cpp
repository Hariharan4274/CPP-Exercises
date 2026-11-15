#include <iostream>
using namespace std;

int isMatch(int num) {
    int last, first;
    last = num % 10;
    
    while (num >= 10) {
        num /= 10;
    }
    first = num;
    
    if (first == last) {
        return 1;
    } else {
        return -1;
    }
}

int main() {
    int limit, res;
    cout << "Enter a limit: " << endl;
    cin >> limit;
    
    for (int i = 10; i <= limit; i++) {
        res = isMatch(i);
        if (res == 1) {
            cout << i << endl;
        }
    }
    
    return 0;
}
