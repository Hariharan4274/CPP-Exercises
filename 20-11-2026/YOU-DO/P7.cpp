#include <iostream>
using namespace std;

class Bottle {
private:
    int capacityMl;

public:
    Bottle() {
        capacityMl = 500;
    }

    Bottle(int capacity) {
        capacityMl = capacity;
    }

    int getCapacity() {
        return capacityMl;
    }
};

int main() {
    int capacity;
    cin >> capacity;
    Bottle standard, custom(capacity);
    cout << "Standard " << standard.getCapacity() << endl;
    cout << "Custom " << custom.getCapacity();
    return 0;
}
