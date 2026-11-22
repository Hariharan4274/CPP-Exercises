#include <iostream>
using namespace std;
int main() {
    int first[3][2] = {{5, 8}, {3, 7}, {9, 2}};
    int second[3][2] = {{4, 1}, {6, 5}, {2, 8}};
    int total[3][2];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            total[i][j] = first[i][j] + second[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        int rowTotal = 0;
        for (int j = 0; j < 2; j++) {
            cout << total[i][j] << " ";
            rowTotal = rowTotal + total[i][j];
        }
        cout << " Row total = " << rowTotal << endl;
    }
    return 0;
}
