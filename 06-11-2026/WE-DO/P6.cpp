#include <iostream>
using namespace std;
int main() {
    bool isRaining;
    cout << "Is it raining (1 for yes, 0 for no): ";
    cin >> isRaining;
    if (isRaining) {
        cout << "Activity: Play video games" << endl;
    } else {
        cout << "Activity: Play outside" << endl;
    }
    return 0;
}
