#include <iostream>
using namespace std;

class Garden {
private:
    int length;
    int width;

public:
    Garden(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }

    int perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    int l, w;
    cin >> l >> w;
    Garden g(l, w);
    cout << "Area " << g.area() << endl;
    cout << "Perimeter " << g.perimeter();
    return 0;
}
