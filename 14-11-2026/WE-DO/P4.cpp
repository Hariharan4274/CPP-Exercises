#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    getline(cin, name);
    int count = 0;
    for (int i = 0; i < name.length(); i++) {
        if (name[i] == ' ') count++;
    }
    cout << count;
    return 0;
}
