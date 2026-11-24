#include <iostream>
using namespace std;

class waterTank {
private:
    int tankCap;
    int currentLevel;

    float fill() {
        if (tankCap <= 0) return 0.0f; 
        return (static_cast<float>(currentLevel) / tankCap) * 100;
    }

public:
    void settankcap(int tankCap) {
        this->tankCap = (tankCap > 0) ? tankCap : 0;
    }
    int gettankCap() {
        return tankCap;
    }
    void setcurrentLevel(int currentLevel) {
        this->currentLevel = (currentLevel >= 0) ? currentLevel : 0;
    }
    int getcurrentLevel() {
        return currentLevel;
    }
    float checkFill() { 
        return fill();
    }
};

int main() {
    waterTank indicate;
    int tankcap, currentlevel;

    cout << "Enter the capacity in litres: " << endl;
    cin >> tankcap;
    indicate.settankcap(tankcap);

    cout << "Enter the current water level in litres: " << endl;
    cin >> currentlevel;
    indicate.setcurrentLevel(currentlevel);

    float percentage = indicate.checkFill(); 
    cout << "Fill: " << percentage << "%" << endl;

    if (percentage < 100) {
        cout << "Refill Required" << endl;
    } else {
        cout << "Refill not required" << endl;
    }

    return 0;
}
