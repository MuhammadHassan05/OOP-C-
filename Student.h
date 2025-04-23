#pragma once
#include "Person.h"

class Student : public Person {
private:
    float cgpa;

public:
    Student(string f, string l, int a, float c) : Person(f, l, a), cgpa(c) {
        cout << "Student Constructor Called"<<endl;
    }

    ~Student() {
        cout << "Student Destructor Called"<<endl;
    }

    void setCGPA(float c) {
        cgpa = c;
    }

    float getCGPA() const {
        return cgpa; 
    }

    void printStudent() {
        cout << "CGPA: " << cgpa << endl;
    }
};
