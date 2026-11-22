#include <iostream>
using namespace std;
int main() {
    int tickets[5] = {10, 15, 20, 30};
    int size = 4;
    int position = 1;
    for (int i = position; i < size - 1; i++) {
        tickets[i] = tickets[i + 1];
    }
    size--;
    for (int i = 0; i < size; i++) {
        cout << tickets[i] << " ";
    }
    cout << endl;
    cout << "Used size: " << size << endl;
    return 0;
}
