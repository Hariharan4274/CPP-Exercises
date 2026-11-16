#include <iostream>
using namespace std;
int main() {
    int price;
    int quantity;
    cin >> price;
    cin >> quantity;
    int total = price * quantity;
    cout << "Total = " << total << endl;
    return 0;
}
