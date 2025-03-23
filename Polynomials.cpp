//#include <iostream>
//using namespace std;
//
//class Polynomial {
//private:
//    int totalTerms;
//    int* coeff;
//    int* exp;
//
//public:
//    Polynomial(int terms, int* coefficients, int* exponents) {
//        totalTerms = terms;
//        coeff = new int[totalTerms];
//        exp = new int[totalTerms];
//        for (int i = 0; i < totalTerms; i++) {
//            coeff[i] = coefficients[i];
//            exp[i] = exponents[i];
//        }
//    }
//
//    ~Polynomial() {
//        delete[] coeff;
//        delete[] exp;
//    }
//
//    friend ostream& operator<<(ostream& os, const Polynomial& p) {
//        for (int i = 0; i < p.totalTerms; i++) {
//            if (i > 0 && p.coeff[i] > 0) os << "+";
//            os << p.coeff[i] << "x^" << p.exp[i];
//        }
//        return os;
//    }
//
//    operator bool() const {
//        for (int i = 0; i < totalTerms; i++) {
//            if (coeff[i] != 0) return true;
//        }
//        return false;
//    }
//
//    bool operator!=(const Polynomial& other) const {
//        if (totalTerms != other.totalTerms) return true;
//        for (int i = 0; i < totalTerms; i++) {
//            if (coeff[i] != other.coeff[i] || exp[i] != other.exp[i]) return true;
//        }
//        return false;
//    }
//
//    Polynomial operator+(const Polynomial& other) const {
//        int newSize = totalTerms + other.totalTerms;
//        int* newCoeff = new int[newSize];
//        int* newExp = new int[newSize];
//        for (int i = 0; i < totalTerms; i++) {
//            newCoeff[i] = coeff[i];
//            newExp[i] = exp[i];
//        }
//        for (int i = 0; i < other.totalTerms; i++) {
//            newCoeff[totalTerms + i] = other.coeff[i];
//            newExp[totalTerms + i] = other.exp[i];
//        }
//        Polynomial result(newSize, newCoeff, newExp);
//        delete[] newCoeff;
//        delete[] newExp;
//        return result;
//    }
//
//    Polynomial& operator++() {
//        for (int i = 0; i < totalTerms; i++) {
//            coeff[i]++;
//        }
//        return *this;
//    }
//
//    Polynomial operator++(int) {
//        Polynomial temp = *this;
//        ++(*this);
//        return temp;
//    }
//
//    Polynomial operator+(int constant) const {
//        Polynomial result = *this;
//        result.coeff[0] += constant;
//        return result;
//    }
//};
//
//int main() {
//    int coeff_P1[] = { 1, 2, 5 };
//    int exp_P1[] = { 4, 2, 0 };
//    int coeff_P2[] = { 4, 3 };
//    int exp_P2[] = { 6, 2 };
//    Polynomial P1(3, coeff_P1, exp_P1);
//    Polynomial P2(2, coeff_P2, exp_P2);
//    cout << "P1 = " << P1 << endl;
//    cout << "P2 = " << P2 << endl;
//    if (!P1)
//        cout << "P1 is zero" << endl;
//    if (P1 != P2)
//        cout << "P1 is Not Equal to P2" << endl;
//    Polynomial P3 = P1 + P2;
//    cout << "P3 = " << P3 << endl;
//    /*P3 = 2 + P1; */
//    cout << "P3 = " << P3 << endl;
//    cout << ++P1 << endl;
//    cout << P1 << endl;
//    cout << P1++ << endl;
//    cout << P1 << endl;
//    return 0;
//}