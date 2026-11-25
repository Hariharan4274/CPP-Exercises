#include <iostream>
#include <string>
using namespace std;

struct Participant {
    string name;
    int rollNumber;
    int mark;
};

int main() {
    Participant p;
    cin >> p.name >> p.rollNumber >> p.mark;
    cout << "Name " << p.name << " | Roll " << p.rollNumber << " | Mark " << p.mark;
    return 0;
}
