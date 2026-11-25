#include <iostream>
using namespace std;

class Warehouse {
private:
    int capacity;
    int stock;

public:
    Warehouse(int c, int s) {
        capacity = c;
        stock = s;
    }

    int getStock() {
        return stock;
    }

    int freeSpace() {
        return capacity - stock;
    }

    bool remove(int quantity) {
        if (quantity > 0 && quantity <= stock) {
            stock -= quantity;
            return true;
        }
        return false;
    }

    bool add(int quantity) {
        if (quantity > 0 && quantity <= freeSpace()) {
            stock += quantity;
            return true;
        }
        return false;
    }
};

int main() {
    int ca, sa, cb, sb, n, quantity;
    cin >> ca >> sa >> cb >> sb >> n;
    Warehouse a(ca, sa), b(cb, sb);
    for (int i = 0; i < n; i++) {
        cin >> quantity;
        bool valid = quantity > 0 && quantity <= a.getStock() && quantity <= b.freeSpace();
        if (valid) {
            a.remove(quantity);
            b.add(quantity);
            cout << "Accepted ";
        } else {
            cout << "Rejected ";
        }
        cout << "A " << a.getStock() << " B " << b.getStock();
        if (i < n - 1) cout << endl;
    }
    return 0;
}
