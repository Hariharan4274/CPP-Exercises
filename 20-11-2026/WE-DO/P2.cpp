#include <iostream>
using namespace std;

class Board {
public:
    int length;
    int width;

    int area() {
        return length * width;
    }
};

int main() {
    Board b;
    cin >> b.length >> b.width;
    cout << "Area " << b.area() << " square centimetres";
    return 0;
}
