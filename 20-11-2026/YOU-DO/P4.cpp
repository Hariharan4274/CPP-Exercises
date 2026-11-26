#include <iostream>
using namespace std;

class Delivery {
private:
    int distanceKm;
    int ratePerKm;

public:
    Delivery(int d, int r) {
        distanceKm = d;
        ratePerKm = r;
    }

    int charge() {
        return 40 + distanceKm * ratePerKm;
    }
};

int main() {
    int d, r;
    cin >> d >> r;
    Delivery x(d, r);
    cout << "Delivery charge " << x.charge();
    return 0;
}
