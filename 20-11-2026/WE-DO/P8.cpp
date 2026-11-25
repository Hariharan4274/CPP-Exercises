#include <iostream>
using namespace std;

class Wallet {
private:
    int balance;

public:
    Wallet(int b) {
        balance = b;
    }

    bool topUp(int amount) {
        if (amount > 0) {
            balance += amount;
            return true;
        }
        return false;
    }

    bool purchase(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    int balance, n, amount;
    char operation;
    cin >> balance >> n;
    Wallet w(balance);
    for (int i = 0; i < n; i++) {
        cin >> operation >> amount;
        bool result;
        if (operation == 'T') result = w.topUp(amount);
        else result = w.purchase(amount);
        if (result) cout << "Accepted ";
        else cout << "Rejected ";
        cout << w.getBalance();
        if (i < n - 1) cout << endl;
    }
    return 0;
}
