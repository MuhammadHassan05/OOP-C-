// RadioButtonGroup.cpp
#include "RadioButtonGroup.h"
using namespace std;

RadioButtonGroup::RadioButtonGroup(const vector<string>& opts, int selected) : options(opts), selectedIndex(selected) {}

string RadioButtonGroup::render() const {
    string result;
    for (size_t i = 0; i < options.size(); ++i) {
        result += (i == selectedIndex ? "[x] " : "[ ] ") + options[i] + "\n";
    }
    return result;
}
