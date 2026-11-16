#include <iostream>
using namespace std;
int main() {
    int A, B;
    cout << "Enter A and B: ";
    cin >> A >> B;
    int temp = A;
    A = B;
    B = temp;
    cout << "After Swap: A = " << A << ", B = " << B << endl;
    return 0;
}
