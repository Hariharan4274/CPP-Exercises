#include <iostream>
using namespace std;
int main() {
    int capacity = 6;
    int size = 4;
    int ids[6] = {101, 105, 110, 114};
    int insertIndex = 2;
    int insertValue = 108;
    if (size < capacity && insertIndex >= 0 && insertIndex <= size) {
        for (int i = size; i > insertIndex; i--) {
            ids[i] = ids[i - 1];
        }
        ids[insertIndex] = insertValue;
        size++;
        for (int i = 0; i < size; i++) {
            cout << ids[i] << " ";
        }
        cout << endl;
        cout << "Size: " << size << endl;
    } else {
        cout << "Cannot insert" << endl;
    }
    int deleteIndex = 3;
    if (deleteIndex >= 0 && deleteIndex < size) {
        for (int i = deleteIndex; i < size - 1; i++) {
            ids[i] = ids[i + 1];
        }
        size--;
        for (int i = 0; i < size; i++) {
            cout << ids[i] << " ";
        }
        cout << endl;
        cout << "Size: " << size << endl;
    } else {
        cout << "Cannot delete" << endl;
    }
    return 0;
}
