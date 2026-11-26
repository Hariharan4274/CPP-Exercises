#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    int bookId;
    int copies;
};

int main() {
    Book b;
    cin >> b.title >> b.bookId >> b.copies;
    cout << "Title " << b.title << " | ID " << b.bookId << " | Copies " << b.copies;
    return 0;
}
