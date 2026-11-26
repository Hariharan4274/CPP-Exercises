#include <iostream>
#include<iomanip>
using namespace std;

class BoardCalculator {
public: 
    int area(int sides) { 
        return sides * sides;
    }

    double area(double length, double breadth) { 
        return length * breadth;
    }
};

int main() {
    int sides;
    double choice, length, breadth;
    cout << "Enter your Choice (1 or 2): " << endl;
    cin >> choice;

    BoardCalculator shape;

    if (choice == 1) {
        cout << "Enter sides of square: " << endl;
        cin >> sides;
        cout << "Area of Square: " <<fixed<<setprecision(2)<<shape.area(sides) << endl;
    } else if (choice == 2) {
        cout << "Enter length and breadth of rectangle: " << endl;
        cin >> length >> breadth;
        cout << "Area of rectangle: " <<fixed<<setprecision(2)<<shape.area(length, breadth) << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
