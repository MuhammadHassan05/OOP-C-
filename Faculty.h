#pragma once
#include "Person.h"

class Faculty : public Person {
private:
    int course_count;
    int extension;

public:
    Faculty(string f, string l, int a, int courseCount, int ext)
        : Person(f, l, a), course_count(courseCount), extension(ext) {
        cout << "Faculty Constructor Called"<<endl;
    }

    ~Faculty() {
        cout << "Faculty Destructor Called"<<endl;
    }

    void setCourseCount(int count) { 
        course_count = count;
    }

    void setExtension(int ext) { 
        extension = ext; 
    }

    int getCourseCount() const {
        return course_count; 
    }

    int getExtension() const {
        return extension; 
    }

    void printFaculty() {
        cout << "Courses: " << course_count << ", Extension: " << extension << endl;
    }
};
