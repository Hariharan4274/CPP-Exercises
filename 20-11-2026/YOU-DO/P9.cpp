#include <iostream>
using namespace std;

class ShopItem {
private:
    int stock;
    int soldCount;

public:
    ShopItem(int s) {
        stock = s;
        soldCount = 0;
    }

    bool receive(int quantity) {
        if (quantity > 0) {
            stock += quantity;
            return true;
        }
        return false;
    }

    bool sell(int quantity) {
        if (quantity > 0 && quantity <= stock) {
            stock -= quantity;
            soldCount += quantity;
            return true;
        }
        return false;
    }

    int getStock() {
        return stock;
    }

    int getSoldCount() {
        return soldCount;
    }
};

int main() {
    int stock, n, quantity;
    char operation;
    cin >> stock >> n;
    ShopItem item(stock);
    for (int i = 0; i < n; i++) {
        cin >> operation >> quantity;
        bool result;
        if (operation == 'R') result = item.receive(quantity);
        else result = item.sell(quantity);
        if (result) cout << "Accepted ";
        else cout << "Rejected ";
        cout << "stock " << item.getStock() << " sold " << item.getSoldCount();
        if (i < n - 1) cout << endl;
    }
    return 0;
}
