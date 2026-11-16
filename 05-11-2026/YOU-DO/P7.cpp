#include <iostream>
using namespace std;
int main() {
    int total = sizeof(double) + sizeof(char) + sizeof(bool);
    cout << total << endl;
    return 0;
}
