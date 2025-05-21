// PasswordField.cpp
#include "PasswordField.h"
using namespace std;

PasswordField::PasswordField(int len) : TextField(len) {}

string PasswordField::render() const {
    return "[" + string(15, '*') + "]";
}
