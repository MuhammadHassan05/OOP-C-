//#include <iostream>
//using namespace std;
//class Student {
//private:
//    char name[50];
//    char rollNo[8];
//    float cgpa;
//    void StringCopy(char* a, const char* b) {
//        int i = 0;
//        while (b[i] != '\0') {
//            a[i] = b[i];
//            i++;
//        }
//        a[i] = '\0';
//    }
//public:
//    Student(const char* r = "", const char* n = "", float c = 0.0) {
//        StringCopy(rollNo, r);
//        StringCopy(name, n);
//        cgpa = c;
//    }
//    void Print() {
//        cout << name << " (" << rollNo << ")" << endl;
//    }
//    float GetCGPA() {
//        return cgpa;
//    }
//    const char* GetName() {
//        return name;
//    }
//    const char* GetRollNo() {
//        return rollNo;
//    }
//};
//class Society {
//private:
//    char name[50];
//    Student* president;
//    Student* members[5];
//    int currentMembers;
//    void StringCopy(char* a, const char* b) {
//        int i = 0;
//        while (b[i] != '\0') {
//            a[i] = b[i];
//            i++;
//        }
//        a[i] = '\0';
//    }
//    bool CompareStrings(const char* a, const char* b) {
//        int i = 0;
//        while (a[i] != '\0' && b[i] != '\0') {
//            if (a[i] != b[i]) return false;
//            i++;
//        }
//        return a[i] == b[i];
//    }
//public:
//    Society(const char* n = "") {
//        StringCopy(name, n);
//        president = nullptr;
//        currentMembers = 0;
//        for (int i = 0; i < 5; i++) {
//            members[i] = nullptr;
//        }
//    }
//    void PrintInfo() {
//        cout << "Society Name: " << name << endl;
//        cout << "President: ";
//        if (president) {
//            president->Print();
//        }
//        else {
//            cout << "Not Available" << endl;
//        }
//        for (int i = 0; i < 5; i++) {
//            cout << "Member " << i + 1 << ": ";
//            if (members[i]) {
//                members[i]->Print();
//            }
//            else {
//                cout << "Not Available" << endl;
//            }
//        }
//    }
//    void AppointPresident(Student& s) {
//        if (president == nullptr && s.GetCGPA() > 3.00) {
//            president = &s;
//            cout << s.GetName() << " has been appointed as President." << endl;
//        }
//        else if (president != nullptr) {
//            cout << "President position is NOT vacant." << endl;
//        }
//        else {
//            cout << s.GetName() << " cannot be appointed as President. CGPA criteria not met." << endl;
//        }
//    }
//    void AddMember(Student& s) {
//        if (president == &s) {
//            cout << "President cannot be added in Members list." << endl;
//            return;
//        }
//        for (int i = 0; i < currentMembers; i++) {
//            if (members[i] == &s) {
//                cout << s.GetName() << " already exists in Members list." << endl;
//                return;
//            }
//        }
//        if (currentMembers < 5) {
//            members[currentMembers++] = &s;
//            cout << s.GetName() << " has been added to members list successfully." << endl;
//        }
//        else {
//            cout << s.GetName() << " cannot be added. Member position is NOT vacant." << endl;
//        }
//    }
//    void SuspendMember(const char* memberName) {
//        for (int i = 0; i < currentMembers; i++) {
//            if (CompareStrings(members[i]->GetName(), memberName)) {
//                cout << memberName << " has been suspended from " << name << " society." << endl;
//                for (int j = i; j < currentMembers - 1; j++) {
//                    members[j] = members[j + 1];
//                }
//                members[--currentMembers] = nullptr;
//                return;
//            }
//        }
//        cout << memberName << " NOT found in the Members list." << endl;
//    }
//};
//int main() {
//    Student s1("12L1111", "Ali", 3.99);
//    Student s2("13L1121", "Abdullah", 3.45);
//    Student s3("13L1126", "Arham", 2.98);
//    Student s4("14L1361", "Hamza", 2.99);
//    Student s5("14L1124", "Bilal", 3.09);
//    Student s6("15L1314", "Usman", 3.19);
//    Society sports("Sports");
//    sports.PrintInfo();
//    cout << endl;
//    sports.AppointPresident(s3);
//    sports.AppointPresident(s1);
//    sports.AppointPresident(s2);
//    cout << endl;
//    Student s7("15L1334", "Zain", 2.19);
//    sports.AddMember(s3);
//    sports.AddMember(s2);
//    sports.AddMember(s3);
//    sports.AddMember(s1);
//    sports.AddMember(s4);
//    sports.AddMember(s5);
//    sports.AddMember(s6);
//    sports.AddMember(s7);
//    cout << endl;
//    sports.PrintInfo();
//    cout << endl;
//    sports.SuspendMember("abc");
//    sports.SuspendMember("Bilal");
//    cout << endl;
//    sports.PrintInfo();
//    cout << endl;
//    Society ieee("IEEE");
//    ieee.AppointPresident(s5);
//    ieee.PrintInfo();
//    return 0;
//}
