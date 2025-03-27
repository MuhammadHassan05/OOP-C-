/////*****task1*****//////
//#include<iostream>
//using namespace std;
//
//class Student {
//private:
//    char name[50];
//    char rollNo[8];
//    float cgpa;
//
//public:
//    Student(const char* n = "", const char* r = "", float c = 0.0) {
//        for (int i = 0; n[i] != '\0' ; i++) {
//            name[i] = n[i];
//        }
//        name[49] = '\0';
//
//        for (int i = 0; r[i] != '\0' && i < 7; i++) {
//            rollNo[i] = r[i];
//        }
//        rollNo[7] = '\0';
//
//        cgpa = c;
//    }
//
//    void Print() const {
//        cout <<"Name is "<< name << endl;
//        cout << "roll number is " << rollNo << endl;
//        cout << "cgpa is " << cgpa << endl;
//    }
//
//    ~Student() {}
//};
//int main() {
//    Student student1("Aslam ali", "22L9356", 3.5);
//    student1.Print();
//    return 0;
//}

////////*****task 2*****//////
//#include<iostream>
//using namespace std;
//class Student {
// private:
//    char name[50];
//    char rollNo[8];
//    float cgpa;
//
// public:
//    Student( const char* r = "",const char* n = "", float c = 0.0) {
//        for (int i = 0; n[i] != '\0' ; i++) {
//            name[i] = n[i];
//        }
//        name[49] = '\0';
//
//        for (int i = 0; r[i] != '\0' && i < 7; i++) {
//            rollNo[i] = r[i];
//        }
//        rollNo[7] = '\0';
//
//        cgpa = c;
//    }
//
//    void Print() const {
//        
//        cout << "roll number is " << rollNo << endl;
// cout << "Name is " << name << endl;
//        cout << "cgpa is " << cgpa << endl;
//    }
//
//    ~Student() {}
// };
//int main() {
// Student s1("12L1111", "Hashim Amla", 3.99);
// s1.Print();
// Student s2("13L1121", "Virat Kohli", 3.45);
// s2.Print();
// Student s3("13L1126", "Quinton de Kock", 2.98);
// s3.Print();
// Student s4("14L1361", "Joe Root", 2.99);
// s4.Print();
// Student s5("14L1124", "Martin Guptil", 3.09);
// s5.Print();
// Student s6("15L1314", "Rohit Sharma", 3.19);
// s6.Print();
// return 0;
//}

////////*****task 3*****//////
//#include<iostream>
//using namespace std;
//
//class Student {
//    // Assume Student class code is defined here
//};
//
//class Society {
//private:
//    char name[50];
//    Student* president;
//    Student* members[5];
//
//public:
//    Society(const char* societyName = "Default Society") {
//        for (int i = 0; i < 50 && societyName[i] != '\0'; i++) {
//            name[i] = societyName[i];
//        }
//        name[49] = '\0';
//
//        president = nullptr;
//        for (int i = 0; i < 5; i++) {
//            members[i] = nullptr;
//        }
//    }
//};

////////*****task 4*****//////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Student {
//public:
//    string name;
//    int id;
//
//    void Print() {
//        cout << "Name: " << name << ", ID: " << id << endl;
//    }
//};
//
//class Society {
//private:
//    string societyName;
//    Student president;
//    Student members[10];
//    int memberCount;
//
//public:
//    Society(string name, Student pres) : societyName(name), president(pres), memberCount(0) {}
//
//    void AddMember(Student member) {
//        if (memberCount < 10) {
//            members[memberCount] = member;
//            memberCount++;
//        }
//    }
//
//    void PrintInfo() {
//        cout << "Society Name " << societyName << endl;
//        cout << "President ";
//        president.Print();
//        cout << "Members " <<endl;
//
//        for (int i = 0; i < memberCount; i++) {
//            members[i].Print();
//        }
//
//        if (memberCount == 0) {
//            cout << "No members in this society " << endl;
//        }
//    }
//};
