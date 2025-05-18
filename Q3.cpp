#include <iostream>
using namespace std;
void throwException(char type) {
    if (type == 'i') {
        throw 42;
    } else if (type == 'd') {
        throw 3.14;
    } else {
        throw "Unknown exception!";
    }
}
int main() {
    char choice;
    cout << "Enter exception type ('i' for int, 'd' for double, anything else for unknown): ";
    cin >> choice;
    try {
        throwException(choice);
    } catch (int e) {
        cout << "Caught integer exception: " << e << endl;
    } catch (double e) {
        cout << "Caught double exception: " << e << endl;
    } catch (...) {
        cout << "Caught unknown exception!" << endl;
    }
    return 0;
}