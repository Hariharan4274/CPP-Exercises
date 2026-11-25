#include <iostream>
using namespace std;

class Ticket {
private:
    int price;

public:
    Ticket() {
        price = 50;
    }

    Ticket(int p) {
        price = p;
    }

    int getPrice() {
        return price;
    }
};

int main() {
    int price;
    cin >> price;
    Ticket standard, special(price);
    cout << "Standard price " << standard.getPrice() << endl;
    cout << "Special price " << special.getPrice();
    return 0;
}
