// Label.cpp
#include "Label.h"
using namespace std;

Label::Label(const string& txt) : text(txt) {}

string Label::render() const {
    return text;
}