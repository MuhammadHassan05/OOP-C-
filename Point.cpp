#include "Point.h"

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
    cout << "Point() called" << endl;
}

void Point::print() const {
    cout << "(" << x << "," << y << ")" << endl;
}

Point::~Point() {
    cout << "~Point() called" << endl;
}