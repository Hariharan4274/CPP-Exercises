#include <iostream>
using namespace std;

class GateCounter {
private:
    int count;

public:
    GateCounter() {
        count = 0;
    }

    void enter() {
        count++;
    }

    int getCount() {
        return count;
    }
};

int main() {
    GateCounter g1, g2;
    int n, gate;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> gate;
        if (gate == 1) g1.enter();
        else if (gate == 2) g2.enter();
    }
    cout << "Gate 1 count " << g1.getCount() << endl;
    cout << "Gate 2 count " << g2.getCount();
    return 0;
}
