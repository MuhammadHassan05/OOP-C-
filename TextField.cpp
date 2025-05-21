// TextField.cpp
#include "TextField.h"
using namespace std;

TextField::TextField(int len) : length(len) {}

string TextField::render() const {
    return "[" + string(length, '.') + "]";
}
