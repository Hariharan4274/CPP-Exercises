#include <iostream>
using namespace std;

class Bus {
private:
    int capacity;
    int passengers;

public:
    Bus(int c, int p) {
        capacity = c;
        passengers = p;
    }

    int getPassengers() {
        return passengers;
    }

    int seatsAvailable() {
        return capacity - passengers;
    }

    bool board(int count) {
        if (count > 0 && count <= seatsAvailable()) {
            passengers += count;
            return true;
        }
        return false;
    }

    bool leave(int count) {
        if (count > 0 && count <= passengers) {
            passengers -= count;
            return true;
        }
        return false;
    }
};

int main() {
    int ca, pa, cb, pb, n, count;
    cin >> ca >> pa >> cb >> pb >> n;
    Bus a(ca, pa), b(cb, pb);
    for (int i = 0; i < n; i++) {
        cin >> count;
        bool valid = count > 0 && count <= a.getPassengers() && count <= b.seatsAvailable();
        if (valid) {
            a.leave(count);
            b.board(count);
            cout << "Accepted ";
        } else {
            cout << "Rejected ";
        }
        cout << "A " << a.getPassengers() << " B " << b.getPassengers();
        if (i < n - 1) cout << endl;
    }
    return 0;
}
