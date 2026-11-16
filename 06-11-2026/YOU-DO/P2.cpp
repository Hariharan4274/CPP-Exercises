#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double km;
    cout << "Enter kilometers: ";
    cin >> km;
    double miles = km * 0.621371;
    cout << fixed << setprecision(2);
    cout << "Miles: " << miles << endl;
    return 0;
}
