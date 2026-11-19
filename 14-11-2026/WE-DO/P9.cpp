#include <iostream>
#include <string>
using namespace std;
int main() {
    string code = "TIGER";
    for (int i = 0; i < code.length(); i++) {
        cout << i << " " << code[i] << endl;
    }
    return 0;
}
