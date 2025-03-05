//#include"Date.h"
//Date::Date() {
//    Day = 1;
//    Month = 1;
//    Year = 1926;
//    cout << "Default Constructor Called" << endl;
//}
//Date::Date(int day, int month, int year) {
//    Day = day;
//    Month = month;
//    Year = year;
//    cout << "Overloaded Constructor Called" << endl;
//}
//void Date::Print() {
//    cout << Day << "/" << Month << "/" << Year << endl;
//}
//void Date::Input() {
//    cout << "Enter day:";
//    cin >> Day;
//    cout << "Enter month:";
//    cin >> Month;
//    cout << "Enter year:";
//    cin >> Year;
//}
//int Date::Compare(Date other) {
//    if (Year > other.Year) {
//        return 1;
//    }
//    if (Year < other.Year) {
//        return -1;
//    }
//    if (Month > other.Month) {
//        return 1;
//    }
//    if (Month < other.Month) {
//        return -1;
//    }
//    if (Day > other.Day) {
//        return 1;
//    }
//    if (Day < other.Day) {
//        return -1;
//    }
//    return 0;
//}
//Date Date::IncrementMonth() {
//    int newMonth = Month + 1;
//    int newYear = Year;
//    if (newMonth > 12) {
//        newMonth = 1;
//        newYear++;
//    }
//    return Date(Day, newMonth, newYear);
//}