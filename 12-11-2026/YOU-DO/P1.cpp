#include <iostream>
using namespace std;
int main() {
    int counts[6];
    cout << "Enter six delivery counts: ";
    for (int i = 0; i < 6; i++) {
        cin >> counts[i];
    }
    cout << "First: " << counts[0] << endl;
    cout << "Last: " << counts[5] << endl;
    for (int i = 5; i >= 0; i--) {
        cout << counts[i] << " ";
    }
    cout << endl;
    return 0;
}
