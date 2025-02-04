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