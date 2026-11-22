#include <iostream>
using namespace std;
int main() {
    int arr[5] = {0, 0, 0, 0, 0};
    int start = 1020;
    int size = 2;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] address = " << start + i * size << endl;
    }
    cout << "arr[5] cannot be read, valid indices are 0 to 4" << endl;
    return 0;
}
