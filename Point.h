#pragma once
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0);  // Constructor
    void print() const;
    ~Point();  // Destructor
};