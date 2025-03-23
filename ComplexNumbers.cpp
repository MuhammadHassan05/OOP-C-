//#include <iostream>
//using namespace std;
//
//class Complex {
//private:
//    double real;
//    double imag;
//
//public:
//    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
//
//    Complex operator+(const Complex& other) {
//        return Complex(real + other.real, imag + other.imag);
//    }
//
//    Complex operator-(const Complex& other) {
//        return Complex(real - other.real, imag - other.imag);
//    }
//
//    Complex operator*(const Complex& other) {
//        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
//    }
//
//    Complex operator/(const Complex& other) {
//        if (other.real == 0 && other.imag == 0) {
//            cout << "invalid input "<<endl;
//        }
//        double denominator = other.real * other.real + other.imag * other.imag;
//        return Complex((real * other.real + imag * other.imag) / denominator,
//            (imag * other.real - real * other.imag) / denominator);
//    }
//
//    Complex& operator++() {
//        ++real;
//        ++imag;
//        return *this;
//    }
//
//    Complex operator++(int) {
//        Complex temp = *this;
//        ++real;
//        ++imag;
//        return temp;
//    }
// 
// friend Complex operator+(double r, const Complex& c) {
//return Complex(r + c.real, c.imag);
//   }
//
//   friend Complex operator-(double r, const Complex& c) {
//        return Complex(r - c.real, -c.imag);
//    }
//
//    friend Complex operator*(double r, const Complex& c) {
//        return Complex(r * c.real, r * c.imag);
//   }
//
// 
//
//    void display() const {
//        cout << real << " + " << imag << "i" << endl;
//    }
//};
//
//int main() {
//    Complex c1(3, 4);
//    Complex c2(1, 2);
//
//    Complex sum = c1 + c2;
//    Complex diff = c1 - c2;
//    Complex prod = c1 * c2;
//    Complex quot = c1 / c2;
//
//    cout << "Sum: ";
//    sum.display();
//    cout << "Difference: ";
//    diff.display();
//    cout << "Product: ";
//    prod.display();
//    cout << "Quotient: ";
//    quot.display();
//
//    ++c1;
//    c1.display();
//
//    c2++;
//    c2.display();
//
//
//    return 0;
//}