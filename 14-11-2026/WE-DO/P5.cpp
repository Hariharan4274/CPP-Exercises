#include <iostream>
#include <string>
using namespace std;
int main() {
    string labels = "red blue";
    int pos = labels.find("blue");
    cout << pos << endl;
    cout << labels.substr(pos) << endl;
    cout << labels.find("pink");
    return 0;
}
