#include <iostream>
using namespace std;

class FruitPurchase {
public:
    int quantity;
    int unitPrice;

    int totalCost() {
        return quantity * unitPrice;
    }
};

int main() {
    FruitPurchase f;
    cin >> f.quantity >> f.unitPrice;
    cout << "Total cost " << f.totalCost();
    return 0;
}
