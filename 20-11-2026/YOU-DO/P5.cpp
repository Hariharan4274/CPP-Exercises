#include <iostream>
using namespace std;

class RoomSetting {
private:
    int temperature;

public:
    RoomSetting() {
        temperature = 24;
    }

    bool setTemperature(int value) {
        if (value >= 16 && value <= 30) {
            temperature = value;
            return true;
        }
        return false;
    }

    int getTemperature() {
        return temperature;
    }
};

int main() {
    RoomSetting r;
    int value;
    for (int i = 0; i < 2; i++) {
        cin >> value;
        if (r.setTemperature(value)) {
            cout << "Accepted ";
        } else {
            cout << "Rejected ";
        }
        cout << r.getTemperature();
        if (i == 0) cout << endl;
    }
    return 0;
}
