//#include <iostream>
//#include <algorithm> 
//using namespace std;
//
//class DynamicArray {
//private:
//    int* arr;
//    int size;
//
//public:
//    // Default Constructor
//    DynamicArray() : arr(nullptr), size(0) {}
//
//    // Parameterized Constructor
//    DynamicArray(int newSize) {
//        size = newSize;
//        arr = new int[size];
//    }
//
//    // Copy Constructor
//    DynamicArray(const DynamicArray& other) {
//        size = other.size;
//        arr = new int[size];
//        copy(other.arr, other.arr + size, arr);
//    }
//
//    // Destructor
//    ~DynamicArray() {
//        delete[] arr;
//    }
//
//    // Resize function
//    void resize(int newSize) {
//        int* newArr = new int[newSize];
//        int minSize = (newSize < size) ? newSize : size;
//        for (int i = 0; i < minSize; ++i) {
//            newArr[i] = arr[i];
//        }
//        delete[] arr;
//        arr = newArr;
//        size = newSize;
//    }
//
//    // Push to end
//    void push(int number) {
//        resize(size + 1);
//        arr[size - 1] = number;
//    }
//
//    // Pop from end
//    int pop() {
//        int val = arr[size - 1];
//        resize(size - 1);
//        return val;
//    }
//
//    // Insert at front
//    void insertAtFront(int number) {
//        resize(size + 1);
//        for (int i = size - 1; i > 0; --i) {
//            arr[i] = arr[i - 1];
//        }
//        arr[0] = number;
//    }
//
//    // Remove from front
//    int removeFromFront() {
//        int val = arr[0];
//        for (int i = 0; i < size - 1; ++i) {
//            arr[i] = arr[i + 1];
//        }
//        resize(size - 1);
//        return val;
//    }
//
//    // Insert at index
//    void insertAtIndex(int number, int index) {
//        if (index < 0 || index > size) {
//            cout << "Invalid index\n";
//            return;
//        }
//        resize(size + 1);
//        for (int i = size - 1; i > index; --i) {
//            arr[i] = arr[i - 1];
//        }
//        arr[index] = number;
//    }
//
//    // Remove from index
//    int removeFromIndex(int index) {
//        if (index < 0 || index >= size) {
//            cout << "Invalid index\n";
//            return -1;
//        }
//        int val = arr[index];
//        for (int i = index; i < size - 1; ++i) {
//            arr[i] = arr[i + 1];
//        }
//        resize(size - 1);
//        return val;
//    }
//
//    // Sort the array
//    void sort() {
//        std::sort(arr, arr + size);
//    }
//
//    // Sum of all elements
//    int sum() const {
//        int total = 0;
//        for (int i = 0; i < size; ++i)
//            total += arr[i];
//        return total;
//    }
//
//    // Display elements
//    void display() const {
//        for (int i = 0; i < size; ++i)
//            cout << arr[i] << " ";
//        cout << endl;
//    }
//
//    // Remove element at specific index
//    void removeElement(int index) {
//        removeFromIndex(index);
//    }
//
//    // Operator Overloading
//    // + operator: merge two arrays
//    DynamicArray operator+(const DynamicArray& other) {
//        DynamicArray result(size + other.size);
//        for (int i = 0; i < size; ++i)
//            result.arr[i] = arr[i];
//        for (int i = 0; i < other.size; ++i)
//            result.arr[size + i] = other.arr[i];
//        return result;
//    }
//
//    // += operator: append another array
//    DynamicArray& operator+=(const DynamicArray& other) {
//        int oldSize = size;
//        resize(size + other.size);
//        for (int i = 0; i < other.size; ++i)
//            arr[oldSize + i] = other.arr[i];
//        return *this;
//    }
//
//    // [] operator: indexing
//    int& operator[](int index) {
//        return arr[index];
//    }
//
//    // () operator: return sum
//    int operator()() const {
//        return sum();
//    }
//
//    // Stream insertion <<
//    friend ostream& operator<<(ostream& os, const DynamicArray& da) {
//        for (int i = 0; i < da.size; ++i)
//            os << da.arr[i] << " ";
//        return os;
//    }
//
//    // Stream extraction >>
//    friend istream& operator>>(istream& is, DynamicArray& da) {
//        for (int i = 0; i < da.size; ++i)
//            is >> da.arr[i];
//        return is;
//    }
//};
//
//int main() {
//    DynamicArray arr1(3);
//    cout << "Enter 3 elements: ";
//    cin >> arr1;
//    cout << "Array: " << arr1 << endl;
//
//    arr1.push(99);
//    cout << "After push(99): " << arr1 << endl;
//
//    arr1.insertAtFront(11);
//    cout << "After insertAtFront(11): " << arr1 << endl;
//
//    arr1.insertAtIndex(55, 2);
//    cout << "After insertAtIndex(55, 2): " << arr1 << endl;
//
//    arr1.sort();
//    cout << "After sort(): " << arr1 << endl;
//
//    cout << "Sum using () operator: " << arr1() << endl;
//
//    DynamicArray arr2(2);
//    cout << "Enter 2 elements for second array: ";
//    cin >> arr2;
//
//    DynamicArray merged = arr1 + arr2;
//    cout << "After merging two arrays: " << merged << endl;
//
//    return 0;
//}
