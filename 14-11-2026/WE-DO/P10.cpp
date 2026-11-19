#include <iostream>
#include <string>
using namespace std;
int main() {
    string label = "red rose";
    label.insert(0, "fresh ");
    cout << label << endl;
    label.erase(6, 4);
    cout << label << endl;
    label.replace(6, 4, "lily");
    cout << label;
    return 0;
}
