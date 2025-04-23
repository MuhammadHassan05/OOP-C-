#pragma once
#include "Student.h"

class Undergraduate : public Student {
private:
    string fyp_name;

public:
    Undergraduate(string f, string l, int a, float c, string fyp)
        : Student(f, l, a, c), fyp_name(fyp) {
        cout << "Undergraduate Constructor Called"<<endl;
    }

    ~Undergraduate() {
        cout << "Undergraduate Destructor Called"<<endl;
    }

    void setFYP(string f) { 
        fyp_name = f; 
    }

    string getFYP() const { 
        return fyp_name;
    }

    void printUndergraduate() {
        cout << "FYP Name: " << fyp_name << endl;
    }
};
