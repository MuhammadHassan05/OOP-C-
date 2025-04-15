//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class Fraction {
//private:
//    int numerator;
//    int denominator;
//
//    void simplify() {
//        if (denominator < 0) {
//            numerator *= -1;
//            denominator *= -1;
//        }
//        int g = gcd(abs(numerator), abs(denominator));
//        numerator /= g;
//        denominator /= g;
//    }
//
//    int gcd(int a, int b) const {
//        return b == 0 ? a : gcd(b, a % b);
//    }
//
//public:
//    // Constructors
//    Fraction() {
//        numerator = 0;
//        denominator = 1;
//    }
//
//    Fraction(int n, int d = 1) {
//        numerator = n;
//        denominator = (d == 0 ? 1 : d);
//        simplify();
//    }
//
//    Fraction(double value) {
//        const int precision = 1000000;
//        numerator = static_cast<int>(value * precision);
//        denominator = precision;
//        simplify();
//    }
//
//    Fraction(const Fraction& other) {
//        numerator = other.numerator;
//        denominator = other.denominator;
//    }
//
//    // Member Functions
//    double toDecimal() const {
//        return static_cast<double>(numerator) / denominator;
//    }
//
//    Fraction reciprocal() const {
//        return Fraction(denominator, numerator);
//    }
//
//    void display() const {
//        cout << numerator << "/" << denominator << endl;
//    }
//
//    // Arithmetic Operators
//    Fraction operator+(const Fraction& rhs) const {
//        Fraction result(numerator * rhs.denominator + rhs.numerator * denominator,
//            denominator * rhs.denominator);
//        result.simplify();
//        return result;
//    }
//
//    Fraction operator-(const Fraction& rhs) const {
//        Fraction result(numerator * rhs.denominator - rhs.numerator * denominator,
//            denominator * rhs.denominator);
//        result.simplify();
//        return result;
//    }
//
//    Fraction operator*(const Fraction& rhs) const {
//        Fraction result(numerator * rhs.numerator,
//            denominator * rhs.denominator);
//        result.simplify();
//        return result;
//    }
//
//    Fraction operator/(const Fraction& rhs) const {
//        Fraction result(numerator * rhs.denominator,
//            denominator * rhs.numerator);
//        result.simplify();
//        return result;
//    }
//
//    // Overload with int
//    Fraction operator+(int val) const { return *this + Fraction(val); }
//    Fraction operator-(int val) const { return *this - Fraction(val); }
//    Fraction operator*(int val) const { return *this * Fraction(val); }
//    Fraction operator/(int val) const { return *this / Fraction(val); }
//
//    // Shorthand Operators
//    Fraction& operator+=(const Fraction& rhs) {
//        *this = *this + rhs;
//        return *this;
//    }
//
//    Fraction& operator-=(const Fraction& rhs) {
//        *this = *this - rhs;
//        return *this;
//    }
//
//    Fraction& operator*=(const Fraction& rhs) {
//        *this = *this * rhs;
//        return *this;
//    }
//
//    Fraction& operator/=(const Fraction& rhs) {
//        *this = *this / rhs;
//        return *this;
//    }
//
//    // Comparison Operators
//    bool operator==(const Fraction& rhs) const {
//        return numerator == rhs.numerator && denominator == rhs.denominator;
//    }
//
//    bool operator!=(const Fraction& rhs) const {
//        return !(*this == rhs);
//    }
//
//    bool operator<(const Fraction& rhs) const {
//        return numerator * rhs.denominator < rhs.numerator * denominator;
//    }
//
//    bool operator>(const Fraction& rhs) const {
//        return rhs < *this;
//    }
//
//    bool operator<=(const Fraction& rhs) const {
//        return !(*this > rhs);
//    }
//
//    bool operator>=(const Fraction& rhs) const {
//        return !(*this < rhs);
//    }
//
//    // Increment and Decrement
//    Fraction& operator++() {
//        numerator += denominator;
//        simplify();
//        return *this;
//    }
//
//    Fraction operator++(int) {
//        Fraction temp = *this;
//        ++(*this);
//        return temp;
//    }
//
//    Fraction& operator--() {
//        numerator -= denominator;
//        simplify();
//        return *this;
//    }
//
//    Fraction operator--(int) {
//        Fraction temp = *this;
//        --(*this);
//        return temp;
//    }
//
//    // Function call operator (returns reciprocal)
//    Fraction operator()() const {
//        return reciprocal();
//    }
//
//    // Stream operators
//    friend ostream& operator<<(ostream& out, const Fraction& f) {
//        out << f.numerator << "/" << f.denominator;
//        return out;
//    }
//
//    friend istream& operator>>(istream& in, Fraction& f) {
//        char slash;
//        in >> f.numerator >> slash >> f.denominator;
//        f.simplify();
//        return in;
//    }
//};
//
//// Main Function to Test All Features
//int main() {
//    Fraction f1(3, 4);
//    Fraction f2(2, 3);
//
//    cout << "f1 = " << f1 << endl;
//    cout << "f2 = " << f2 << endl;
//
//    cout << "f1 + f2 = " << f1 + f2 << endl;
//    cout << "f1 - f2 = " << f1 - f2 << endl;
//    cout << "f1 * f2 = " << f1 * f2 << endl;
//    cout << "f1 / f2 = " << f1 / f2 << endl;
//
//    cout << "f1.toDecimal() = " << f1.toDecimal() << endl;
//    cout << "Reciprocal of f1 using function call operator: " << f1() << endl;
//
//    cout << "Prefix ++f1 = " << ++f1 << endl;
//    cout << "Postfix f2++ = " << f2++ << endl;
//    cout << "After postfix f2 = " << f2 << endl;
//
//    Fraction input;
//    cout << "Enter a fraction (e.g. 5/8): ";
//    cin >> input;
//    cout << "You entered: " << input << endl;
//
//    return 0;
//}
