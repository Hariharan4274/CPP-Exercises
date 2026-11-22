#include <iostream>
using namespace std;
int main() {
    int index[2] = {2, 5};
    int score[2] = {76, 60};
    for (int t = 0; t < 2; t++) {
        int scores[5] = {55, 72, 68, 91, 83};
        if (index[t] >= 0 && index[t] < 5) {
            scores[index[t]] = score[t];
            for (int i = 0; i < 5; i++) {
                cout << scores[i] << " ";
            }
            cout << endl;
        } else {
            cout << "Invalid index" << endl;
        }
    }
    return 0;
}
