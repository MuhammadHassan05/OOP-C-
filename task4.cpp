//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//class Date {
//private:
//    int day, month, year;
//
//    // Check if the year is a leap year
//    bool isLeapYear(int y) {
//        return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
//    }
//
//    // Get days in a month
//    int daysInMonth(int m, int y) {
//        if (m == 2) return isLeapYear(y) ? 29 : 28;
//        if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
//        return 31;
//    }
//
//public:
//    // Default Constructor
//    Date() {
//        day = 1;
//        month = 1;
//        year = 1970;
//    }
//
//    // Parameterized Constructor
//    Date(int d, int m, int y) {
//        if (isValid(d, m, y)) {
//            day = d;
//            month = m;
//            year = y;
//        }
//        else {
//            day = 1;
//            month = 1;
//            year = 1970;
//            cout << "Invalid date! Resetting to 01-01-1970.\n";
//        }
//    }
//
//    // Validate a date
//    bool isValid(int d, int m, int y) {
//        if (y < 0 || m < 1 || m > 12 || d < 1) return false;
//        if (d > daysInMonth(m, y)) return false;
//        return true;
//    }
//
//    // Display the date
//    void display() {
//        cout << setfill('0') << setw(2) << day << "-"
//            << setfill('0') << setw(2) << month << "-"
//            << year << endl;
//    }
//
//    // Add days
//    void addDays(int d) {
//        day += d;
//        while (day > daysInMonth(month, year)) {
//            day -= daysInMonth(month, year);
//            month++;
//            if (month > 12) {
//                month = 1;
//                year++;
//            }
//        }
//    }
//
//    // Subtract days
//    void subtractDays(int d) {
//        day -= d;
//        while (day <= 0) {
//            month--;
//            if (month <= 0) {
//                month = 12;
//                year--;
//            }
//            day += daysInMonth(month, year);
//        }
//    }
//
//    // Operator Overloading for +
//    Date operator+(int d) {
//        Date temp = *this;
//        temp.addDays(d);
//        return temp;
//    }
//
//    // Operator Overloading for -
//    Date operator-(int d) {
//        Date temp = *this;
//        temp.subtractDays(d);
//        return temp;
//    }
//
//    // Prefix ++ (next day)
//    Date& operator++() {
//        addDays(1);
//        return *this;
//    }
//
//    // Postfix ++
//    Date operator++(int) {
//        Date temp = *this;
//        addDays(1);
//        return temp;
//    }
//
//    // Comparison ==
//    bool operator==(const Date& other) {
//        return (day == other.day && month == other.month && year == other.year);
//    }
//
//    // Input
//    friend istream& operator>>(istream& in, Date& d) {
//        cout << "Enter date (dd mm yyyy): ";
//        in >> d.day >> d.month >> d.year;
//        if (!d.isValid(d.day, d.month, d.year)) {
//            d = Date();
//            cout << "Invalid date! Resetting to 01-01-1970.\n";
//        }
//        return in;
//    }
//
//    // Output
//    friend ostream& operator<<(ostream& out, const Date& d) {
//        out << setfill('0') << setw(2) << d.day << "-"
//            << setfill('0') << setw(2) << d.month << "-"
//            << d.year;
//        return out;
//    }
//};
//
//// Main function
//int main() {
//    Date d1(31, 12, 2023);
//    cout << "Original Date: ";
//    d1.display();
//
//    d1.addDays(1);
//    cout << "After Adding 1 Day: ";
//    d1.display();
//
//    d1.subtractDays(2);
//    cout << "After Subtracting 2 Days: ";
//    d1.display();
//
//    Date d2;
//    cin >> d2;
//    cout << "You entered: " << d2 << endl;
//
//    Date d3 = d2 + 10;
//    cout << "10 days after entered date: " << d3 << endl;
//
//    Date d4 = d2 - 5;
//    cout << "5 days before entered date: " << d4 << endl;
//
//    if (d3 == d4) {
//        cout << "Dates are same\n";
//    }
//    else {
//        cout << "Dates are different\n";
//    }
//
//    return 0;
//}
