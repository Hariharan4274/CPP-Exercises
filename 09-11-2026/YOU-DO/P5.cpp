#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    int count = 0;
    int num = 1;
    while (count < n) {
        num++;
        int isPrime = 1;
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            count++;
        }
    }
    cout << num << endl;
    return 0;
}
