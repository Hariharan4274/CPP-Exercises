#include <iostream>
using namespace std;
int main() {
    int tickets[5] = {10, 20, 30};
    int size = 3;
    int newTicket = 15;
    int position = 1;
    for (int i = size; i > position; i--) {
        tickets[i] = tickets[i - 1];
    }
    tickets[position] = newTicket;
    size++;
    for (int i = 0; i < size; i++) {
        cout << tickets[i] << " ";
    }
    cout << endl;
    cout << "Used size: " << size << endl;
    return 0;
}
