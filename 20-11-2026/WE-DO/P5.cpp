#include <iostream>
using namespace std;

class MarkRecord {
private:
    int mark;

public:
    MarkRecord() {
        mark = 0;
    }

    bool setMark(int value) {
        if (value >= 0 && value <= 100) {
            mark = value;
            return true;
        }
        return false;
    }

    int getMark() {
        return mark;
    }
};

int main() {
    MarkRecord m;
    int value;
    for (int i = 0; i < 2; i++) {
        cin >> value;
        if (m.setMark(value)) cout << "Accepted ";
        else cout << "Rejected ";
        cout << m.getMark();
        if (i == 0) cout << endl;
    }
    return 0;
}
