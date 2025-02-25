//////#include<iostream>
//////using namespace std;
//////int main() {
//////	int a = 10, b = 20;
//////	int* ptr = nullptr;
//////	ptr = &b;
//////	a = *ptr;
//////	cout << a << endl;
//////	cout << &b << endl;
//////	cout << ptr << endl;
//////
//////	cout << *ptr << endl;
//////	cout << &ptr << endl;
//////
//////	return 0;
//////}
////#include<iostream>
////using namespace std;
////void swaping(int* a, int* b)
////{
////    cout << a << endl;
////    int c = *a;
////    *a = *b;
////    *b = c;
////}
////int main()
////{
////    int a = 10, b = 20;
////    swaping(&a, &b);
////    cout << a << b << endl;
////}
//#include<iostream>
//using namespace std;
//void swaping(int* a, int* b)
//{
//
//    int c = *a;
//    *a = *b;
//    *b = c;
//}
//int main()
//{
//    int a = 10, b = 20;
//    int* pa = &a, * pb = &b;
//    swaping(pa, pb);
//    cout << a << b << endl;
//}
#include <iostream>

int main() {
    // Fixed size 2x2 matrices
    int* matA = new int[4];  // 2x2 matrix stored in a single array
    int* matB = new int[4];
    int* result = new int[4];

    // Input Matrix A
    std::cout << "Enter 4 elements for Matrix A:\n";
    for (int i = 0; i < 4; i++) {
        std::cin >> matA[i];
    }

    // Input Matrix B
    std::cout << "Enter 4 elements for Matrix B:\n";
    for (int i = 0; i < 4; i++) {
        std::cin >> matB[i];
    }

    // Adding Matrices
    for (int i = 0; i < 4; i++) {
        result[i] = matA[i] + matB[i];
    }

    // Display Matrices
    std::cout << "\nMatrix A:\n";
    std::cout << matA[0] << " " << matA[1] << "\n" << matA[2] << " " << matA[3] << "\n";

    std::cout << "\nMatrix B:\n";
    std::cout << matB[0] << " " << matB[1] << "\n" << matB[2] << " " << matB[3] << "\n";

    std::cout << "\nResult (A + B):\n";
    std::cout << result[0] << " " << result[1] << "\n" << result[2] << " " << result[3] << "\n";

    // Deallocate memory
    delete[] matA;
    delete[] matB;
    delete[] result;

    return 0;
}
