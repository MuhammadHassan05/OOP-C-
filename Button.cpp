// Button.cpp
#include "Button.h"
using namespace std;

Button::Button(const string& lbl) : label(lbl) {}

string Button::render() const {
    return "[ " + label + " ]";
}