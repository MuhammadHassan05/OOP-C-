#pragma once
#include "Student.h"

class Graduate : public Student {
private:
    string thesis_topic;

public:
    Graduate(string f, string l, int a, float c, string thesis)
        : Student(f, l, a, c), thesis_topic(thesis) {
        cout << "Graduate Constructor Called"<<endl;
    }

    ~Graduate() {
        cout << "Graduate Destructor Called"<<endl;
    }

    void setThesis(string t) {
        thesis_topic = t; 
    }

    string getThesis() const {
        return thesis_topic;
    }

    void printGraduate() {
        cout << "Thesis Topic: " << thesis_topic << endl;
    }
};
