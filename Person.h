#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string first_name;
    string last_name;

protected:
    int age;

public:
    Person(string f, string l, int a) : first_name(f), last_name(l), age(a) {
        cout << "Person Constructor Called"<<endl;
    }

    ~Person() {
        cout << "Person Destructor Called"<<endl;
    }

    void setFirstName(string f) 
    { 
        first_name = f;
    }

    void setLastName(string l) 
    { 
        last_name = l; 
    }

    void setAge(int a) 
    {
        age = a;
    }

    string getFirstName() const {
        return first_name; 
    }

    string getLastName() const {
        return last_name; 
    }

    int getAge() const { 
        return age; 
    }

    void printInformation() {
        cout << "Name: " << first_name << " " << last_name << ", Age: " << age << endl;
    }
};
