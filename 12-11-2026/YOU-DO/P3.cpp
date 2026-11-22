#include <iostream>
using namespace std;
int main() {
    int ids[6] = {21, 35, 21, 44, 21, 50};
    int targets[2] = {21, 99};
    for (int t = 0; t < 2; t++) {
        int count = 0;
        cout << "Target " << targets[t] << ": ";
        for (int i = 0; i < 6; i++) {
            if (ids[i] == targets[t]) {
                cout << i << " ";
                count++;
            }
        }
        if (count == 0) {
            cout << "Not found" << endl;
        } else {
            cout << "Count = " << count << endl;
        }
    }
    return 0;
}
