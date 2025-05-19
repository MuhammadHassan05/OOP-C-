#include <iostream>
using namespace std;
class DivisionByZeroException {
public:
    void printMessage() const {
        cout << "Error: Division by zero is not allowed!" << endl;
    }
};
class Fraction {
private:
    int numerator, denominator;
public:
    Fraction(int num, int denom) {
        if (denom == 0) {
            throw DivisionByZeroException();
        }
        numerator = num;
        denominator = denom;
    }
    Fraction divide(const Fraction& other) {
        if (other.numerator == 0) {
            throw DivisionByZeroException();
        }
        return Fraction(numerator * other.denominator, denominator * other.numerator);
    }
    void display() const {
        cout << numerator << "/" << denominator << endl;
    }
};
int main() {
    try {
        int num1, denom1, num2, denom2;
        cout << "Enter first fraction (numerator denominator): ";
        cin >> num1 >> denom1;
        cout << "Enter second fraction (numerator denominator): ";
        cin >> num2 >> denom2;

        Fraction f1(num1, denom1);
        Fraction f2(num2, denom2);

        Fraction result = f1.divide(f2);
        cout << "Resulting fraction: ";
        result.display();
    } catch (DivisionByZeroException e) {
        e.printMessage();
    } catch (...) {
        cout << "An unknown exception occurred!" << endl;
    }
    return 0;
}