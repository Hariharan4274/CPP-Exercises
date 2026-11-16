#include <iostream>
using namespace std;
int main() {
    int marks = 88;
    int attendance = 72;
    bool eligible = marks > 85 || attendance > 90;
    cout << eligible << endl;
    return 0;
}
