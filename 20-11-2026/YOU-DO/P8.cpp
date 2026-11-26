#include <iostream>
using namespace std;

class WaterTank {
private:
    int capacity;
    int water;

public:
    WaterTank(int c, int w) {
        capacity = c;
        water = w;
    }

    bool fill(int litres) {
        if (litres > 0 && water + litres <= capacity) {
            water += litres;
            return true;
        }
        return false;
    }

    bool use(int litres) {
        if (litres > 0 && litres <= water) {
            water -= litres;
            return true;
        }
        return false;
    }

    int getWater() {
        return water;
    }
};

int main() {
    int capacity, water, n, amount;
    char operation;
    cin >> capacity >> water >> n;
    WaterTank tank(capacity, water);
    for (int i = 0; i < n; i++) {
        cin >> operation >> amount;
        bool result;
        if (operation == 'F') {
            result = tank.fill(amount);
        } else {
            result = tank.use(amount);
        }
        if (result) cout << "Accepted ";
        else cout << "Rejected ";
        cout << tank.getWater();
        if (i < n - 1) cout << endl;
    }
    return 0;
}
