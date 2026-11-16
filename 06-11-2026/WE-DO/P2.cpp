#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double celsius;
    cout << "Enter Celsius: ";
    cin >> celsius;
    double fahrenheit = celsius * 9 / 5 + 32;
    cout << fixed << setprecision(1);
    cout << "Fahrenheit: " << fahrenheit << "F" << endl;
    return 0;
}
