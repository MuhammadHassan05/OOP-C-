#include <iostream>
using namespace std;
class ArrayIndexOutOfBoundsException {
public:
    void printMessage() const {
        cout << "Error: Array index out of bounds!" << endl;
    }
};
int getElementAtIndex(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        throw ArrayIndexOutOfBoundsException();
    }
    return arr[index];
}
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index;
    cout << "Enter an index (0-4): ";
    cin >> index;
    try {
        int value = getElementAtIndex(arr, 5, index);
        cout << "Element at index " << index << ": " << value << endl;
    } catch (ArrayIndexOutOfBoundsException e) {
        e.printMessage();
    } catch (...) {
        cout << "An unknown exception occurred!" << endl;
    }
    return 0;
}