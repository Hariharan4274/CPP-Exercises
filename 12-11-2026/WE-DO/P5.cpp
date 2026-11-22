#include <iostream>
using namespace std;
int main() {
    int labels[5] = {14, 27, 31, 27, 42};
    int requests[2] = {27, 99};
    for (int r = 0; r < 2; r++) {
        int found = -1;
        for (int i = 0; i < 5; i++) {
            if (labels[i] == requests[r]) {
                found = i;
                break;
            }
        }
        if (found == -1) {
            cout << requests[r] << ": Not found" << endl;
        } else {
            cout << requests[r] << ": index " << found << endl;
        }
    }
    return 0;
}
