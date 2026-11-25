#include <iostream>
using namespace std;

class Hall {
private:
    int capacity;
    int booked;

public:
    Hall(int c) {
        capacity = c;
        booked = 0;
    }

    bool book(int seats) {
        if (seats > 0 && seats <= capacity - booked) {
            booked += seats;
            return true;
        }
        return false;
    }

    bool cancel(int seats) {
        if (seats > 0 && seats <= booked) {
            booked -= seats;
            return true;
        }
        return false;
    }

    int available() {
        return capacity - booked;
    }
};

int main() {
    int capacity, n, seats;
    char operation;
    cin >> capacity >> n;
    Hall h(capacity);
    for (int i = 0; i < n; i++) {
        cin >> operation >> seats;
        bool result;
        if (operation == 'B') result = h.book(seats);
        else result = h.cancel(seats);
        if (result) cout << "Accepted ";
        else cout << "Rejected ";
        cout << h.available();
        if (i < n - 1) cout << endl;
    }
    return 0;
}
