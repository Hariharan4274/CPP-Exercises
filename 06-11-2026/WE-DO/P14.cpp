#include <iostream>
using namespace std;
int main() {
    int side1, side2, side3;
    cout << "Enter three sides: ";
    cin >> side1 >> side2 >> side3;
    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
        cout << "Valid triangle" << endl;
    } else {
        cout << "Not a valid triangle" << endl;
    }
    return 0;
}
