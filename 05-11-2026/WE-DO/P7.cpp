#include <iostream>
using namespace std;
int main() {
    int total = sizeof(float) + sizeof(char) + sizeof(bool);
    cout << total << endl;
    return 0;
}
