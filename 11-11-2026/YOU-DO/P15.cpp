#include <iostream>
using namespace std;

int main() {
    int limit, rem, appearance = 0;
    cout<<"Enter the limit: "<<endl;
    cin >> limit;
    for (int i = 1; i <= limit; i++) {
        int temp = i;  
        while (temp > 0) {
            rem = temp % 10;
            if (rem == 2) {
                appearance++;
            }
            temp /= 10;
        }
    }
    
    cout << "Digit 2 appearances = " << appearance;
    return 0;
}
