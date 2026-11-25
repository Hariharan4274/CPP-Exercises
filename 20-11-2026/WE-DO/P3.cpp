#include <iostream>
using namespace std;

class LibraryAccount {
private:
    int borrowedCount;

public:
    LibraryAccount() {
        borrowedCount = 0;
    }

    void borrowOne() {
        borrowedCount++;
    }

    int getBorrowedCount() {
        return borrowedCount;
    }
};

int main() {
    int n;
    cin >> n;
    LibraryAccount a;
    for (int i = 0; i < n; i++) {
        a.borrowOne();
    }
    cout << "Books borrowed " << a.getBorrowedCount();
    return 0;
}
